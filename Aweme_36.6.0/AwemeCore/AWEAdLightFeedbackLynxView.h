@class AWEOriginalAdLynxComponentModel, NSString, AWEBDARifleView, AWEAwemeModel, NSDictionary;

@interface AWEAdLightFeedbackLynxView : UIView <AWEBDARifleViewDelegate, AWEAdLightFeedbackLynxView>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEOriginalAdLynxComponentModel *component;
@property (retain, nonatomic) AWEBDARifleView *lynxContainer;
@property (nonatomic) BOOL hasTrackShowBefore;
@property (nonatomic) unsigned long long startAnimationTime;
@property (nonatomic) unsigned long long startAnimationAttachMilliSeconds;
@property (nonatomic) double startAnimationHeight;
@property (nonatomic) double startAnimationDuration;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *appendAdExtraData;
@property (nonatomic) BOOL disableAutoShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *surl;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSDictionary *initialProps;
@property (nonatomic) BOOL canShow;
@property (copy, nonatomic) id /* block */ updateLynxViewHeight;
@property (copy, nonatomic) id /* block */ lynxButtonLoadFailBlock;
@property (copy, nonatomic) id /* block */ isElementHidden;

+ (BOOL)canUseConvertInfo:(id)a0;
+ (void)addCovertInfoIntoLocalStorage:(id)a0;
+ (id)lockForLocalStorage;
+ (void)clearExpireConvertInfoInLocalStorage;
+ (BOOL)isConvertInfoInLocalStorage:(id)a0;
+ (BOOL)shouldShowBottomFeedBack:(id)a0;

- (void)trackShowIfNeeded;
- (id)lynxBridge;
- (void)lynxAnimationStartWithNotification:(id)a0;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (void)setupLynxContainer;
- (BOOL)updateLynxViewHeight:(double)a0 withDuration:(double)a1 enterMethod:(id)a2;
- (void)startAnimationAfterDelayTime;
- (void)autoShowLynxViewIfNeeded;
- (void)setupLynxViewWithModel:(id)a0;
- (void)notifyAppear;
- (void)notifyDisappear;
- (void)sendVideoLoopEvent:(long long)a0;
- (void)sendBackFromLandingPageEvent:(double)a0 surveyShowed:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;

@end
