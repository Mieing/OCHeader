@interface IESLiveHybridShareUtils : NSObject

+ (BOOL)supportNativeShareInfo:(id)a0;
+ (void)shareWithTargetURL:(id)a0 title:(id)a1 content:(id)a2 imageURL:(id)a3 eventContext:(id)a4;
+ (void)shareWithHybridView:(id)a0 eventContext:(id)a1;
+ (void)shareWithShareInfo:(id)a0 eventContext:(id)a1;

@end
