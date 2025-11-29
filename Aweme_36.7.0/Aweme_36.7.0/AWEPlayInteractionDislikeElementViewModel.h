@class UIViewController;

@interface AWEPlayInteractionDislikeElementViewModel : AWEPlayInteractionBaseElementViewModel

@property (nonatomic) BOOL disableDislikeAction;
@property (weak, nonatomic) UIViewController *viewController;

- (void)trackClickClose;
- (void)onDislikeButtonClicked:(id)a0;
- (void)didCancelDislike:(BOOL)a0;
- (void)trackClickDislike;
- (void)trackClickCancel;
- (void)onCancelButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
