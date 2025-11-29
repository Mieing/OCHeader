@class UIViewController;
@protocol IESGCPAudienceDetailInstanceInterface;

@interface AWEPadSplitViewGameCPBizAdapter : AWEPadSplitViewBaseBizAdapter

@property (weak, nonatomic) UIViewController<IESGCPAudienceDetailInstanceInterface> *gameDetailVC;

- (void)service:(id)a0 willShowViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 willDismissViewController:(id)a1 source:(long long)a2;
- (void)service:(id)a0 didDismissViewController:(id)a1 source:(long long)a2;
- (void).cxx_destruct;

@end
