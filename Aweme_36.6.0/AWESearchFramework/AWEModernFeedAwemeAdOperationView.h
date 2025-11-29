@class AWEAwemeModel, NSString, UIImageView, AWEButton, UILabel, UIView, YYLabel;
@protocol AWEAdOperationGuideStarView;

@interface AWEModernFeedAwemeAdOperationView : UIView <AWESearchAdAppointmentResultMessage>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *descInfoContainerView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *appInfoView;
@property (retain, nonatomic) UIView<AWEAdOperationGuideStarView> *starView;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) YYLabel *descLabel;
@property (retain, nonatomic) AWEButton *replayButton;
@property (retain, nonatomic) AWEButton *learnMoreButton;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *adEventName;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ trackSearchResultClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)descLabelMaxWidth:(BOOL)a0;
+ (double)containerMaxWidth:(BOOL)a0;

- (id)adExtraData;
- (void)handleAppointmentResultWithAdModel:(id)a0 sceneType:(long long)a1 appointmentStatus:(BOOL)a2 error:(id)a3;
- (id)createContentDescriptionStringFrom:(id)a0;
- (BOOL)shouldHideAppInfo;
- (void)trackSearchResultClick:(id)a0;
- (void)setBCMParams;
- (BOOL)isLiveVideoType;
- (void)adOperationViewTapped:(id)a0;
- (void)adOperationAccessibility;
- (id)allComponentViews;
- (BOOL)isAppointmentType;
- (void)updateLearnMoreViewForAppointment;
- (id)formatAppointmentCount;
- (void)openLandingPageOrAppStoreWithRefer:(id)a0;
- (void)resetLayouts;
- (void)updateSubviewInfo;
- (void)updateAppInfoLayout:(BOOL)a0;
- (void)updateDescInfoContainerLayout:(BOOL)a0;
- (void)updateSubviewLayout:(BOOL)a0;
- (void)replayButtonClicked:(id)a0;
- (void)learnMoreButtonClicked:(id)a0;
- (void)updateRadiausOfAdOperation:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupSubviews;
- (void)updateAppInfo;

@end
