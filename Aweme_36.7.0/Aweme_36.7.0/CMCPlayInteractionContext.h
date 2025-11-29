@class UIView, UIViewController, AWEAwemeModel;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface CMCPlayInteractionContext : CMCContext

@property (nonatomic) double currentTime;
@property (nonatomic) long long stallState;
@property (weak, nonatomic) AWEAwemeModel *curAweme;
@property (nonatomic) double currPlaybackTime;
@property (weak, nonatomic) UIView *feedContentView;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionController;
@property (weak, nonatomic) UIViewController *playInteractionVc;

- (void).cxx_destruct;

@end
