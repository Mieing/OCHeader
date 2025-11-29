@class AWEButton, AWEUserModel, MASConstraint;

@interface AWEUserSlidingNavbarButtonView : UIView

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long status;
@property (retain, nonatomic) MASConstraint *followBtnLeftConstraint;
@property (retain, nonatomic) AWEButton *slidingMsgBtn;
@property (retain, nonatomic) AWEButton *slidingFollowBtn;
@property (copy, nonatomic) id /* block */ msgBlock;
@property (copy, nonatomic) id /* block */ followBlock;

- (void)setButtonStatus:(long long)a0;
- (void)refreshWithUser:(id)a0;
- (void)refreshWithStatus:(long long)a0;
- (void)msgBtnClicked:(id)a0;
- (BOOL)p_needHideSendMsgButton;
- (void)followBtnClicked:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;

@end
