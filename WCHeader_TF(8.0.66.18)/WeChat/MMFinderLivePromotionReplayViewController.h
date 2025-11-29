@class NSString, UINavigationController, MMFinderLivePromotionReplayOperationView, MMFinderLiveReplayView, FinderBulkBuyInfo, MMFinderLiveTaskId, NSDictionary, UIImageView, FinderWindowProductInfo, MMUIButton;
@protocol MMLiveViewControllerDelegate;

@interface MMFinderLivePromotionReplayViewController : MMCPUIViewController <MMFinderLiveReplayOperationViewDelegate, MMLiveTaskMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) long long currOrientation;
@property (retain, nonatomic) MMFinderLiveReplayView *replayView;
@property (retain, nonatomic) MMFinderLivePromotionReplayOperationView *operationView;
@property (retain, nonatomic) MMUIButton *backBarButton;
@property (nonatomic) unsigned int viewStartTime;
@property (retain, nonatomic) FinderWindowProductInfo *product;
@property (retain, nonatomic) FinderBulkBuyInfo *bulkBuy;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) id /* block */ productRefresher;
@property (weak, nonatomic) id<MMLiveViewControllerDelegate> delegate;
@property (weak, nonatomic) UINavigationController *navControl;
@property (retain, nonatomic) NSDictionary *reportExtraInfo;
@property (retain, nonatomic) UIImageView *blurView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 url:(id)a1 product:(id)a2 productRefresher:(id /* block */)a3;
- (id)initWithTaskId:(id)a0 url:(id)a1 bulkBuy:(id)a2;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)enterLive;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)layoutOperationView;
- (void)updateReplayOperationViewFrame;
- (void)layoutBackBarButton;
- (void)layoutReplayView;
- (void)layoutBlurView;
- (void)initData;
- (void)exitAndClearLive;
- (void)onMMLiveFullScreenTaped;
- (void)onMMLiveReplayVideoSizeChange:(struct CGSize { double x0; double x1; })a0;
- (void)close;
- (id)liveTask;
- (id)promotionReplayOperationView;
- (void)onDoneButtonClicked;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
