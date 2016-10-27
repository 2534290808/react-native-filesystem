#import <Foundation/Foundation.h>
#import "RCTBridgeModule.h"

extern NSString *const STORAGE_BACKED_UP;
extern NSString *const STORAGE_IMPORTANT;
extern NSString *const STORAGE_AUXILIARY;
extern NSString *const STORAGE_TEMPORARY;

@interface RNFileSystem : NSObject <RCTBridgeModule>

+ (void)writeToFile:(NSString*)relativePath content:(NSString*)content inStorage:(NSString*)storage;
+ (NSString*)readFile:(NSString*)relativePath inStorage:(NSString*)storage error:(NSError**)error;
+ (BOOL)fileExists:(NSString*)relativePath inStorage:(NSString*)storage;
+ (BOOL)directoryExists:(NSString*)relativePath inStorage:(NSString*)storage;
+ (BOOL)deleteFileOrDirectory:(NSString*)relativePath inStorage:(NSString*)storage;

@end
