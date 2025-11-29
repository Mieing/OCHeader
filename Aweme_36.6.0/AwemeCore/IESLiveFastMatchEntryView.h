@class NSNumber, IESLiveWaitingListUser, UIImageView, NSString, UILabel, UIView, UIButton;

@interface IESLiveFastMatchEntryView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *entryBtn;
@property (retain, nonatomic) UILabel *entryHintLabel;
@property (retain, nonatomic) UILabel *entryHintSubLabel;
@property (retain, nonatomic) UIButton *addPriceBtn;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) IESLiveWaitingListUser *userInfo;
@property (retain, nonatomic) NSNumber *addPriceTime;
@property (copy, nonatomic) id /* block */ onClickEntryBtn;
@property (copy, nonatomic) id /* block */ onClickAvatar;
@property (copy, nonatomic) id /* block */ onClickAddPriceBtn;
@property (nonatomic) BOOL isUserWaiting;
@property (nonatomic) long long sortStrategy;
@property (nonatomic) BOOL transToPaidQueue;
@property (nonatomic) BOOL enableMultiAddPrice;
@property (nonatomic) unsigned long long viewStyle;
@property (copy, nonatomic) NSString *timeLabelPrefixString;

- (void)updateRankText;
- (id)waitingDesString:(id)a0 nowTime:(id)a1;
- (id)p_normalBtn;
- (void)updateUserInfo:(id)a0 now:(id)a1;
- (void)updateWaitingTime:(id)a0;
- (void)updateAddPriceBtnUserInterfaceEnable:(BOOL)a0;
- (void)updateAddPriceBtnEnable:(BOOL)a0;
- (id)addPriceWaitingDesString:(id)a0 nowTime:(id)a1 useAddPriceText:(BOOL)a2;
- (id)waitingDesString:(id)a0 nowTime:(id)a1 isInPaidLinkmic:(BOOL)a2;
- (BOOL)p_isAddPriceStyle;
- (id)p_timeLabelStringWithText:(id)a0;
- (void).cxx_destruct;
- (void)onTapAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
