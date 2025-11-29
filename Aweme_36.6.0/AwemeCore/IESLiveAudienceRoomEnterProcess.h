@class NSString, IESLiveAudienceRoomStateGuarder, IESLiveAudienceContainerContext;
@protocol IESLiveRoomService, HTSLiveRoomRemoteActions, IESLiveAudienceRoomEnterDelegate;

@interface IESLiveAudienceRoomEnterProcess : NSObject <HTSLiveAudienceActions>

@property (retain, nonatomic) IESLiveAudienceRoomStateGuarder *roomGuarder;
@property (retain, nonatomic) IESLiveAudienceContainerContext *containerContext;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) id<HTSLiveRoomRemoteActions> remoteDispatcher;
@property (weak, nonatomic) id<IESLiveAudienceRoomEnterDelegate> delegate;
@property (copy, nonatomic) NSString *sourcePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)enterRoom;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (void)traceSpan:(unsigned long long)a0 isStart:(BOOL)a1 error:(id)a2;
- (id)initWithContainerContext:(id)a0 delegate:(id)a1;
- (void)reEnterRoomOnSpecialEvents;
- (void)tryEnterRoom:(long long)a0 retryIndex:(unsigned long long)a1;
- (void)loadEcomGoodsParams:(id)a0;
- (void)didEnterLiveRoomFail:(id)a0 logId:(id)a1;
- (BOOL)enterRetryPolicyEnable;
- (int)retryTimeInterval:(id)a0 retryCount:(long long)a1;
- (BOOL)noNeedRetryEnterRoom:(id)a0;
- (id)enterRetryTimeIntervals;
- (void)enterRoomWithoutDispatch;
- (void)updateRoomIfNeeded;
- (void)preloadRoom;
- (void)enterRoomPaused;
- (void).cxx_destruct;

@end
