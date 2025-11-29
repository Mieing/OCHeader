@class MMKV, NSTimer, NSString, AWELeftSideBarConfigLottieModel, AWELeftSideBarManager, AWELeftSideBarTimeManager;

@interface AWELeftSideBarCommonBussinessManager : NSObject

@property (weak, nonatomic) AWELeftSideBarManager *leftSideBarManager;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) AWELeftSideBarTimeManager *timeManager;
@property (retain, nonatomic) NSTimer *commonBubbleTimer;
@property (retain, nonatomic) NSTimer *commonLottieTimer;
@property (retain, nonatomic) NSTimer *captionBubbleTimer;
@property (nonatomic) BOOL delayShowCaption;
@property (retain, nonatomic) AWELeftSideBarConfigLottieModel *currentLottieModel;
@property (nonatomic) BOOL necessaryOpenSidebar;
@property (retain, nonatomic) NSString *necessaryOpenStatus;
@property (retain, nonatomic) NSString *necessaryOpenBusinessId;
@property (retain, nonatomic) NSString *necessaryOpenReferString;

+ (Class)aAWEPadLeftSideBarAdapterClass;

- (id)aAWEPadLeftSideBarAdapter;
- (void)onLeftSideBarDidOpen:(id)a0;
- (id)initWithLeftSideBarManager:(id)a0;
- (void)clearLeftSideBarCommonBussinessInfo;
- (BOOL)handleLeftSideBarCommonLottieWithConfig:(id)a0;
- (void)handleLeftSideBarCommonLottieList;
- (void)handleLeftSideBarCaptionBubble;
- (void)handleLeftSideBarCommonBubble;
- (BOOL)showCommonLottieIfNeedWithConfig:(id)a0;
- (void)handleLeftSideBarCommonLottieListIfNeed;
- (void)showCaptionBubbleIfNeed;
- (void)showCommonBubbleIfNeed;
- (void)stopCommonBubbleTimer;
- (void)stopCommonLottieTimer;
- (void)stopCaptionBubbleTimer;
- (void)removeCommonLottie;
- (void)track_leftSideBarClickWithPresent:(id)a0 withEntranceStatus:(id)a1;
- (void)openSchema:(id)a0 withNeedLogin:(BOOL)a1 businessId:(id)a2 type:(id)a3 withCompletion:(id /* block */)a4;
- (BOOL)checkShowCaptionBubble;
- (void)showCaptionBubble;
- (id)captionBubbleKey;
- (BOOL)checkShowCommonBubble;
- (void)showCommonBubble;
- (void)showCommonBubbleWithRetry:(BOOL)a0;
- (id)commonBubbleKey;
- (BOOL)checkShowCommonLottieWithConfig:(id)a0;
- (void)showCommonLottieWithConfig:(id)a0;
- (void)startHideLottieTimerWithConfig:(id)a0;
- (id)commonLottieKey;
- (void)openSchema:(id)a0 businessId:(id)a1 type:(id)a2 withBeginTime:(double)a3 withCompletion:(id /* block */)a4;
- (void)handleLeftSideBarCommonBussiness;
- (void)showCommonBussinessIfNeed;
- (void)willReloadSideBarBusinessInfo:(id)a0;
- (BOOL)onHandleLeftSideBarEntranceViewClick:(id)a0;
- (void)removeCommonLottieWithPresenter:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
