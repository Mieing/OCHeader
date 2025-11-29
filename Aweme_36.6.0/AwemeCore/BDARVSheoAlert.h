@class BDARVSheoUIVideo, BDARFirstFrameTime, BDARVSourceModel, BDARVADModel, UIButton, UIView, NSString, BDSHEngine, BDARVPayloadData, NSArray, NSData, BDARewardedVideoAdConfig, BDARVEventTracker, BDARVSheoBridgeManager;
@protocol IESForestRequestOperation;

@interface BDARVSheoAlert : BDARVAlert <BDSHEngineDelegate, BDARVSheoBridgeContext>

@property (retain, nonatomic) BDARVADModel *adModel;
@property (retain, nonatomic) BDSHEngine *sheoEngine;
@property (retain, nonatomic) UIView *rootView;
@property (retain, nonatomic) UIButton *touchControl;
@property (nonatomic) BOOL isClosing;
@property (retain, nonatomic) BDARVSheoBridgeManager *bridgeModule;
@property (retain, nonatomic) NSData *templateData;
@property (retain, nonatomic) BDARVEventTracker *tracker;
@property (nonatomic) BOOL isCallShow;
@property (nonatomic) BOOL isAdRequestCompleted;
@property (copy, nonatomic) NSString *observerToken;
@property (weak, nonatomic) BDARVSheoUIVideo *sheoPlayer;
@property (retain, nonatomic) id<IESForestRequestOperation> currentOperation;
@property (nonatomic) BOOL isBuilding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BDARVPayloadData *payloadData;
@property (copy, nonatomic) NSArray *adModels;
@property (copy, nonatomic) NSString *rewardInfo;
@property (retain, nonatomic) BDARFirstFrameTime *firstFrameTime;
@property (retain, nonatomic) BDARewardedVideoAdConfig *config;
@property (copy, nonatomic) NSString *liveRoomId;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (nonatomic) unsigned long long adType;
@property (nonatomic) long long position;

- (void)videoFirstFrame;
- (void)layoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)engine:(id)a0 handleBridgeWithName:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (void)engine:(id)a0 loadWithEventType:(long long)a1 eventInfo:(id)a2;
- (id)playerStatusInfo;
- (void)handleJumpWithActionButton:(id)a0;
- (void)backToNative;
- (void)sendShowEvent;
- (void)monitorVideoEvent:(id)a0;
- (void)sendBannerEventWithLabel:(id)a0 refer:(id)a1;
- (void)tapAction:(id)a0 forEvent:(id)a1;
- (void)closeAlert;
- (void)sendShowoverEvent;
- (void)monitorADLifeCycleTimestamp;
- (void)updateIsVerticalScreen:(BOOL)a0;
- (void)fetchAdDataWithCompletion:(id /* block */)a0;
- (void)loadTemplateDataWithCompletion:(id /* block */)a0;
- (void)checkLoadResultWithAdDataError:(id)a0 templateError:(id)a1;
- (void)fallbackToNAWithAdModel:(id)a0 error:(id)a1;
- (void)setupSheoView;
- (id)sheoTemplateDataWithAdModel:(id)a0;
- (void)monitorSheoFallbackWithError:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showInView:(id)a0;
- (void)loadContent;

@end
