@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol LSIMChatDetailNaviBarDelegate;

@interface LSIMChatDetailNaviBar : LSNaviBar

@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIButton *phoneBtn;
@property (retain, nonatomic) UIButton *shopBtn;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *expandBtn;
@property (retain, nonatomic) UIView *onlineIndicator;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *onlineStatusDesc;
@property (nonatomic) long long imType;
@property (nonatomic) long long chatType;
@property (nonatomic) BOOL floatingMode;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *phoneIcon;
@property (nonatomic) BOOL shopBtnHidden;
@property (nonatomic) BOOL moreBtnHidden;
@property (nonatomic) BOOL phoneBtnHidden;
@property (copy, nonatomic) NSString *shopOnlineStatusDesc;
@property (copy, nonatomic) NSString *shopScore;
@property (nonatomic) long long shopStatus;
@property (weak, nonatomic) id<LSIMChatDetailNaviBarDelegate> delegate;

- (void)btnClicked:(id)a0;
- (void)updateRightViews;
- (void)updateOnlineLayout;
- (void)updateOfflineLayout;
- (void)updateShopScoreLayout;
- (void)updateShopStatusInfo;
- (void)updateLeftViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
