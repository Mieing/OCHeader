@class CSJDislikeNewViewController, CSJMaterialMeta;

@interface CSJDislikeContext : NSObject

@property (nonatomic) BOOL tapedDislike;
@property (retain, nonatomic) CSJDislikeNewViewController *vc;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (nonatomic) unsigned long long source;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (copy, nonatomic) id /* block */ dislikeResultBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ dislikeViewControllerPresentCompletionBlock;
@property (copy, nonatomic) id /* block */ duplicateTapedDislike;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;

- (void)_showFromViewController:(id)a0 dislikeResultSuccessBlock:(id /* block */)a1;
- (void)_showNewFromViewController:(id)a0 dislikeResultSuccessBlock:(id /* block */)a1;
- (void)_showOldFromViewController:(id)a0 dislikeResultSuccessBlock:(id /* block */)a1;
- (id)realPresentingViewControllerFromViewController:(id)a0;
- (void)showFromViewController:(id)a0 inView:(id)a1;
- (void).cxx_destruct;
- (void)remove;
- (id)init;
- (void)showFromViewController:(id)a0;

@end
