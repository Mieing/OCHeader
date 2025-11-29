@interface AWEDislikeOsmoticViewModel : AWEPlayInteractionDislikeElementViewModel

@property (nonatomic) BOOL disableDislikeAction;

- (void)onDislikeButtonClicked:(id)a0;
- (void)onOptimizedDislikeButtonClicked:(id)a0 extraInfo:(id)a1;
- (void)didClickWithdrawWithParams:(id)a0;

@end
