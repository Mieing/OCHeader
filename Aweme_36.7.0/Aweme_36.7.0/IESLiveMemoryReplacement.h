@interface IESLiveMemoryReplacement : NSObject

+ (void)startReplacement;
+ (void)stopReplacement;
+ (void)replaceSwizzleClass:(Class)a0 SEL:(SEL)a1 withSEL:(SEL)a2;
+ (BOOL)isStartReplacement;
+ (void)replacement;

@end
