@interface TTMacroManager : NSObject

+ (BOOL)isInHouse;
+ (BOOL)isRelease;
+ (BOOL)isAddressSanitizer;
+ (BOOL)isThreadSanitizer;
+ (BOOL)isDebug;

@end
