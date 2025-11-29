@class NSString, UIImageView, IESLiveGCDTimer, UILabel, UIView, AWEFeedLiveTabSelectionView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEFeedLiveTabTopSelectionView : UIView <AWEFeedLiveTabViewControllerLifeCycleAction, AWEFeedLiveTabSelectionAction>

@property (nonatomic) int visitType;
@property (nonatomic) BOOL hasFollowUp;
@property (retain, nonatomic) UIView *tipContainer;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *tip;
@property (retain, nonatomic) UIView *split;
@property (retain, nonatomic) AWEFeedLiveTabSelectionView *selectionView;
@property (retain, nonatomic) IESLiveGCDTimer *hideTimer;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ didTimeEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;

- (void)didSetAttachingDIContext;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (void)feedLiveTabDidEnter:(id)a0;
- (void)didSelectedTabWithItem:(id)a0 preTabItem:(id)a1;
- (void)feedLiveTabDidLeave;
- (void)feedLiveTabWillAppear:(id)a0;
- (void)feedLiveTabDidDisappear;
- (void)feedLiveTabDidEnterBackground;
- (void)feedLiveTabDidEnterForeground;
- (id)liveMarkGradientColors;
- (void)setupAnchorAvatarUIWithData:(id)a0;
- (void)pauseShowAnchorLiveAvatarTime;
- (void)tipClick:(id)a0;
- (void)restartShowAnchorLiveAvatarIfNeed;
- (void)hideAnchorLiveAvatar:(BOOL)a0;
- (void)p_stopHideTime;
- (void)scaleHideTabTopSelectionViewWithAnimation;
- (void)restartHideTimeIfNeeded;
- (void)showAnchorLiveAvatarWithData:(id)a0 visitType:(int)a1;
- (void)showTabTopSelectionView:(BOOL)a0;
- (void)stopHideTime;
- (void).cxx_destruct;
- (id)initWithSelectionView:(id)a0;
- (void)setupView;

@end
