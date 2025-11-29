@interface AWEVideoCoverNLEEditorUtils : NSObject

+ (void)copyRepoPublishConfigFrom:(id)a0 to:(id)a1 ignoreRecommendCoverList:(BOOL)a2;
+ (void)stashVideoCoverEditorChangesFromInputData:(id)a0 toPublishModel:(id)a1;
+ (double)bottomContainerHeight:(id)a0;
+ (void)openVideoCoverNLEEditorWithPublishModel:(id)a0 editService:(id)a1 serviceProvider:(id)a2 dismissBlock:(id /* block */)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cutRectWithPublishModel:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewCoverRectWithPublishModel:(id)a0;

@end
