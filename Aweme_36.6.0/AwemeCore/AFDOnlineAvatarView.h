@class AFDOnlineAvatarViewModel, UIImageView, AFDOnlineAvatarViewLayout, UIView, AFDOnlineAvatarViewContext;
@protocol AFDOnlineAvatarViewDelegate;

@interface AFDOnlineAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) AFDOnlineAvatarViewLayout *layout;
@property (retain, nonatomic) AFDOnlineAvatarViewModel *viewModel;
@property (weak, nonatomic) id<AFDOnlineAvatarViewDelegate> delegate;
@property (retain, nonatomic) AFDOnlineAvatarViewContext *context;

- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (void)refreshUI;
- (void)setupUI;
- (void)updateWithContext:(id)a0;

@end
