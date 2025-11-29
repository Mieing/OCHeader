@class UIView;
@protocol AWEAdAvatarView;

@interface AWEBasicModePlayInteractionUserAvatarView : UIView

@property (retain, nonatomic) UIView<AWEAdAvatarView> *userAvatarView;
@property (retain, nonatomic) UIView *followPromptView;

- (void)makeConstraints;
- (void).cxx_destruct;
- (id)init;

@end
