@interface AWECodeRunner : NSObject

+ (void)runCodeAtStage:(char *)a0;
+ (void)runCodeAtStage:(char *)a0 machoHeader:(void *)a1;
+ (void)runCodeForDefaultStage;
+ (void)runCodeForWebview;
+ (void)runCodeForRN;

@end
