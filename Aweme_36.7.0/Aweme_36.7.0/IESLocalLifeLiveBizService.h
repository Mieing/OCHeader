@class NSString;

@interface IESLocalLifeLiveBizService : HTSService <IESLocalLifeLiveBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentRoomID;
+ (Class)getHalfScreenContainer;
+ (BOOL)hasCreatedLiveRoom;
+ (void)trackLiveShowWithRoom:(id)a0 coreParams:(id)a1 extraParams:(id)a2;
+ (BOOL)enableStreamDataLoad;
+ (BOOL)hasEnteredLiveRoom;
+ (void)openLiveScheme:(id)a0;
+ (id)liveSmallWindowManager;
+ (void)batchCollectInformation:(id)a0;
+ (id)characterValueForKey:(id)a0;
+ (id)getLatestFactor:(id)a0;
+ (void)pauseCurrentLive;
+ (void)resumeCurrentLive;
+ (id)getLiveRoomInfo;
+ (BOOL)openNativeLiveShelfWithSource:(id)a0 type:(long long)a1 params:(id)a2;
+ (id)getLiveRoomCouponInfo;
+ (BOOL)shelfPageIsOpenNow;
+ (id)getLiveStrategyData:(id)a0;
+ (id)commonTrackerParameter;
+ (id)getLiveLocalLifeFragment;
+ (BOOL)enableIESLocalLifeLiveSaaS;
+ (void)judgeRemoveLiveSmallWindow;
+ (void)handleShareInfo:(id)a0 context:(id)a1;
+ (id)localLifeLiveSDKShareTrackerParams:(id)a0;
+ (id)localLifeLiveSDKShareTrackerJSBParams:(id)a0;
+ (id)getSharePanelInfoWithContext:(id)a0;
+ (id)getJSBridgeBroadcastNotificationName;
+ (void)addStrategyObserver:(id)a0 InFactor:(id)a1;
+ (void)removeStrategyObserver:(id)a0 InFactor:(id)a1;
+ (void)processNativeAppPowerSaveWithClearType:(unsigned long long)a0 fromShelfPage:(BOOL)a1;
+ (void)muteLiveWindow:(BOOL)a0;
+ (id)createVideoAudioPreviewStreamView;
+ (id)p_localLifeLiveSDKShareTrackerParams:(id)a0;


@end
