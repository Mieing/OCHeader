@class NSString, NSDate;

@interface AWELiveInappPushManager : NSObject <AWEPushSBCProtocol>

@property (nonatomic) unsigned long long showTimesInThisColdLaunch;
@property (retain, nonatomic) NSDate *livePushPrevShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;

- (BOOL)pushSBCCouldHandleWithMsg:(id)a0 payload:(id)a1 businessType:(id)a2;
- (void)p_showPush:(id)a0;
- (void)p_showPushIfNeeded:(id)a0;
- (void)p_delayToShowPush:(id)a0;
- (void)innerPushShowed;
- (id)currentTopPage:(id)a0;
- (BOOL)p_isLiveBusinessType:(id)a0;
- (id)p_innerPushExemptModelWithBusinessType:(id)a0 eventType:(id)a1;
- (void)trackLivePushAbandonWithRoomID:(id)a0 anchorID:(id)a1 abandonReson:(id)a2;
- (BOOL)p_canRequestOrShowLiveInappPushWithExemptModel:(id)a0;
- (void)trackLivePushAbandonWithModel:(id)a0 eventName:(id)a1;
- (BOOL)p_canShowLiveInappPushWithPushModel:(id)a0;
- (void)showPushAfterCheckPreview:(id)a0;
- (void)stopPullStreamOverTime:(id)a0 withPreviewManager:(id)a1;
- (Class)p_inappPushViewClassWithPushModel:(id)a0;
- (BOOL)p_canShowLiveInappPushPlusWithPushModel:(id)a0;
- (BOOL)p_isChatPushShowing;
- (BOOL)p_isLivePushShowing;
- (BOOL)p_isShakePushShowing;
- (void).cxx_destruct;
- (id)init;

@end
