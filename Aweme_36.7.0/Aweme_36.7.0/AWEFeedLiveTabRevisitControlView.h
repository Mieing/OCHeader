@class NSString, UIImageView, IESLiveGCDTimer, UILabel, UIView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEFeedLiveTabRevisitControlView : UIView <AWEFeedLiveTabViewControllerLifeCycleAction>

@property (nonatomic) int visitType;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL hasFindLiveGuide;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;

- (void)layoutSubviews;
- (void)didSetAttachingDIContext;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (void)tapGestureAction;
- (void)setupNormalUI;
- (void)feedLiveTabDidEnter:(id)a0;
- (void)feedLiveTabDidLeave;
- (void)feedLiveTabWillAppear:(id)a0;
- (void)feedLiveTabDidDisappear;
- (void)feedLiveTabDidEnterBackground;
- (void)feedLiveTabDidEnterForeground;
- (id)liveMarkGradientColors;
- (void)setupOperationInfoUIWithData:(id)a0;
- (void)setupAnchorAvatarUIWithData:(id)a0;
- (void)restartShowFindLiveGuideIfNeed;
- (void)hideOperationInfo;
- (void)hideAnchorLiveAvatar;
- (void)hideFindLiveGuide;
- (void)pauseShowAnchorLiveAvatarTime;
- (void)autoOpenRevisitSection;
- (void)showFindLiveGuideWithData:(id)a0 visitType:(int)a1;
- (void)showControlView:(BOOL)a0 animation:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
