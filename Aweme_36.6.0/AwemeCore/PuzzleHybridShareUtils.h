@interface PuzzleHybridShareUtils : NSObject

+ (BOOL)supportNativeShareInfo:(id)a0;
+ (void)shareWithHybridView:(id)a0 context:(id)a1;
+ (void)shareWithTargetURL:(id)a0 title:(id)a1 content:(id)a2 imageURL:(id)a3 context:(id)a4;
+ (void)getShareInfoOfWebView:(id)a0 complete:(id /* block */)a1;
+ (void)shareWithShareInfo:(id)a0 context:(id)a1;

@end
