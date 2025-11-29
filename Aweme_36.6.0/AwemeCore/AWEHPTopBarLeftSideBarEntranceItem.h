@class AWELeftSideBarEntranceCaptionBubbleView, NSString, NSObject;
@protocol AWELeftSideBarAmbienceObjectProtocol;

@interface AWEHPTopBarLeftSideBarEntranceItem : AWEHPTopBarBaseEntranceItem <AWELeftSideBarEntranceViewModelProtocol, AWEHPTopBarEntranceItemProtocol>

@property (retain, nonatomic) NSObject<AWELeftSideBarAmbienceObjectProtocol> *leftSideBarAmbienceObject;
@property (retain, nonatomic) AWELeftSideBarEntranceCaptionBubbleView *leftSideBarEntranceCaptionBubbleView;
@property (nonatomic) BOOL leftSideBarEntranceCaptionBubbleIsShow;
@property (nonatomic) long long currentThemeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)entranceShouldShow;
+ (id)entranceBizID;

- (void)themeDidChange:(long long)a0;
- (unsigned long long)entranceType;
- (id)entranceView;
- (BOOL)slidingScrollViewShouldScrollWithPanGestureRecognizer:(id)a0;
- (BOOL)isShowCaptionBubble;
- (BOOL)isShowInteractiveAnimation;
- (id)getBubbleModelWithChannelBubbleModel:(id)a0;
- (BOOL)hpLeftSideBarEntranceViewCanShowInteractiveAnimation;
- (BOOL)hpLeftSideBarEntranceViewCanShowAnimation;
- (void)hpLeftSideBarShowPopViewWithTask:(id)a0;
- (void)hpLeftSideBarShowCaptionBubbleWithModel:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2 clickContentBlock:(id /* block */)a3 clickCloseButtonBlock:(id /* block */)a4 autoDismissBlock:(id /* block */)a5;
- (void)hpLeftSideBarHideCaptionBubbleWithAnimated:(BOOL)a0 withReason:(long long)a1 completion:(id /* block */)a2;
- (double)topCTAFloat:(double)a0;
- (struct CGSize { double x0; double x1; })entranceSize;
- (void)loadEntranceView;
- (void)topBarLeftContainerHideChange:(BOOL)a0;
- (void)topBarLeftContainerAlphaChange:(double)a0;
- (void)entranceDidAdd;
- (void)entranceWillAppear;
- (void)entranceDidAppear;
- (void)entranceWillDisappear;
- (void)entranceDidDisappear;
- (void)homepageLoginChange;
- (void)removeLeftSideBarEntranceCaptionBubbleViewWithAnimated:(BOOL)a0 withReason:(long long)a1 withCompletion:(id /* block */)a2;
- (void)setupLeftSideBarAmbienceObjectIfNeeded;
- (void)removeLeftSideBarCaptionIfNeeded;
- (void)addLeftSideBarEntranceCaptionBubbleViewWithModel:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2 clickContentBlock:(id /* block */)a3 clickCloseButtonBlock:(id /* block */)a4 autoDismissBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (void)dealloc;

@end
