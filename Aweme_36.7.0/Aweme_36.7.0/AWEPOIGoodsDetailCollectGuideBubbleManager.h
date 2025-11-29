@class NSString, DUXPopover, NSDictionary, AWEGoodsDetailPageContext, NSObject, AWEPOIGoodsDetailCollectGuideInfo;
@protocol OS_dispatch_source;

@interface AWEPOIGoodsDetailCollectGuideBubbleManager : NSObject <AWEShareMessage>

@property (nonatomic) BOOL isShowSharePanel;
@property (nonatomic) BOOL alreadyCollected;
@property (nonatomic) BOOL goodsDetailPanelShow;
@property (nonatomic) BOOL clickPayment;
@property (nonatomic) BOOL vcAppear;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (copy, nonatomic) NSString *anchorViewID;
@property (copy, nonatomic) NSString *showScene;
@property (nonatomic) BOOL hadShowBubble;
@property (retain, nonatomic) DUXPopover *popover;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (weak, nonatomic) NSDictionary *baseRouterParams;
@property (weak, nonatomic) NSDictionary *dataSource;
@property (retain, nonatomic) AWEPOIGoodsDetailCollectGuideInfo *collectGuideInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupNotification;
- (void)handleLynxBroadcastNotification:(id)a0;
- (id)checkFrequency;
- (void)sharePanelDisplayStatus:(BOOL)a0;
- (id)preCheckResult;
- (void)goodsDetailDidClose;
- (void)goodsDetailDidDisapper;
- (void)goodsDetailDidNotFirstAppear;
- (void)updateDataSource:(id)a0 baseRouterParams:(id)a1;
- (void)goodsDetailDidFirstAppear;
- (void)allTriggerSituation;
- (void)newUserGuideTrigger;
- (void)sortTriggerRule;
- (void)touchTriggerRule;
- (void)readyToShowGuideBtnWithScene:(id)a0 errMsg:(id)a1;
- (void)longTimeBrowserGoodsDetail;
- (void)moreTimeOrRepeatBrowserGoodsDetail;
- (BOOL)hadClickCollected;
- (void)updatePoiEnterID;
- (void)trackEventWithScene:(id)a0 errMsg:(id)a1;
- (void)showCollectGuideBubble;
- (BOOL)hadClosedGuideBtn;
- (id)checkCrossPoiFrequencyWithXDay:(long long)a0 yTime:(long long)a1 crossPoi:(long long)a2;
- (id)bubbleShowCloseParam;
- (void)deeplyBrowserGoodsDetail;
- (void)clickGuideBubbleWithLynxView:(id)a0;
- (void)showGuideBubbleWithLynxView:(id)a0;
- (id)triggerParamsWithShow:(BOOL)a0;
- (void)broadcastEventWithParams:(id)a0 lynxView:(id)a1;
- (void)recordShownNewUserGuide;
- (void)recordCrossPoiFrequency;
- (void)trackBubbleShowEvent;
- (void)recordClosedBubble;
- (void)trackBubbleCloseEvent;
- (void).cxx_destruct;
- (void)invalidate;
- (void)timerFired;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)resumeTimer;

@end
