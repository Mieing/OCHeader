@class UIViewController, UIView;

@interface BDPInteractGameBootManager : BDPBootManager

@property (copy, nonatomic) id /* block */ didLoadConfigBlock;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (copy, nonatomic) id /* block */ stopBlock;
@property (weak, nonatomic) UIView *outBaseView;
@property (weak, nonatomic) UIView *outSubBaseView;
@property (weak, nonatomic) UIViewController *outBaseVc;

- (void)boot;
- (void)loadFinishWithResult:(unsigned long long)a0 error:(id)a1 extraParams:(id)a2;
- (void)setupLoadInstanceWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
