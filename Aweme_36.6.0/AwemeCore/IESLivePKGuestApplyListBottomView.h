@class IESLiveWaitingListUser, UIImageView, UILabel, UIView, NSNumber;

@interface IESLivePKGuestApplyListBottomView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *entryHintLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) IESLiveWaitingListUser *userInfo;
@property (retain, nonatomic) NSNumber *addPriceTime;
@property (copy, nonatomic) id /* block */ onClickAvatar;
@property (nonatomic) BOOL isUserWaiting;
@property (nonatomic) BOOL sortByTime;

- (void)updateRankText;
- (id)p_normalBtn;
- (void)updateUserInfo:(id)a0 now:(id)a1;
- (void)updateWaitingTime:(id)a0;
- (void).cxx_destruct;
- (void)onTapAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
