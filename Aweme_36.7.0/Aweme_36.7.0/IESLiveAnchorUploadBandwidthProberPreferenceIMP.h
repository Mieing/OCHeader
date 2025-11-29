@class LSUploadBandwidthProber, PreviewStreamInfo, IESLivePushStreamLogger, NSString, IESLiveGCDTimer, NSDictionary, NSObject, NSMapTable, IESLiveCDNSpeedTestApi;
@protocol IESLiveAnchorDynamicClarityPreferenceService, OS_dispatch_queue, IESLiveMonitor;

@interface IESLiveAnchorUploadBandwidthProberPreferenceIMP : NSObject <IESLiveAnchorUploadBandwidthProberService>

@property (retain, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityPreference;
@property (retain, nonatomic) LSUploadBandwidthProber *prober;
@property (retain, nonatomic) IESLiveCDNSpeedTestApi *speedTestApi;
@property (retain, nonatomic) IESLivePushStreamLogger *pushStreamLogger;
@property (retain, nonatomic) PreviewStreamInfo *currentPreviewStreamInfo;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) double proberTime;
@property (nonatomic) double startTestTime;
@property (nonatomic) double startProcessTime;
@property (nonatomic) unsigned long long alreadyTestCount;
@property (nonatomic) unsigned long long maxTestCount;
@property (nonatomic) BOOL needCount;
@property (nonatomic) unsigned long long alreadyBubbleShowCount;
@property (nonatomic) unsigned long long maxBubbleShowCount;
@property (retain, nonatomic) NSMapTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) long long liveType;
@property (nonatomic) unsigned long long businessStatus;
@property (nonatomic) BOOL isFinishWhenTesting;
@property (retain, nonatomic) NSDictionary *sourceParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startProcessWithNeedCount:(BOOL)a0;
- (void)stopProcessDestroyDataIfNeed:(BOOL)a0;
- (void)addStatusChangeObserver:(id)a0 block:(id /* block */)a1;
- (void)removeAllStatusChangeObservers;
- (id)getRoomMode;
- (void)clarityItemDisplayImageUpdateIfNeed;
- (id)getClarityPreferenceImageName;
- (BOOL)enableClarityExternalDisplay;
- (void)appendTestCount;
- (void)setupProber;
- (BOOL)canStartProcess;
- (void)updateBusinessStatus:(unsigned long long)a0 extraParams:(id)a1;
- (void)startRequestPreparaPushInfo;
- (void)trackTestProcessResultWithExtraParams:(id)a0;
- (void)stopRequestPreparaPushInfo;
- (void)cancelUploadBandwidthProber;
- (long long)getLiveTabWithLiveType:(long long)a0;
- (void)startUploadBandwidthProber;
- (BOOL)canShowBubbleWithBubbleShowCountLimt;
- (void)appendBubbleShowCount;
- (id)getGuideToolbarProvider;
- (void)trackShowRecommendKeyBubble;
- (void)promptByRedDot;
- (void)stopUploadBandwidthProberWithTimeEnd:(BOOL)a0;
- (id)limitExprieTime;
- (BOOL)canStartProcessWithTestCountLimt;
- (void).cxx_destruct;
- (id)init;
- (void)removeStatusChangeObserver:(id)a0;

@end
