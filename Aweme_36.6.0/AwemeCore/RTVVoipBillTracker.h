@class HMDThreadSafeDictionary;

@interface RTVVoipBillTracker : NSObject

@property (retain, nonatomic) HMDThreadSafeDictionary *callVideoDescDict;
@property (retain, nonatomic) HMDThreadSafeDictionary *userVideoFrameDescDict;
@property (nonatomic) unsigned long long videoUserCount;
@property (nonatomic) unsigned long long audioUserCount;
@property (nonatomic) double pureAudioStartTime;
@property (nonatomic) double pureAudioTime;
@property (nonatomic) double audioStartTime;
@property (nonatomic) double audioAllTime;
@property (nonatomic) double idleStartTime;
@property (nonatomic) double idleTime;
@property (nonatomic) struct CGSize { double width; double height; } localVideoEncodeSize;

- (void)addAudioDurationIfNeeded;
- (void)addPureAudioDuration;
- (void)trackVideoCallEndWithUserID:(id)a0 voipModel:(id)a1 voipTracker:(id)a2 needUpdate:(BOOL)a3;
- (void)addPureAudioDurationIfNeeded;
- (void)trackOnVideoResolutionQualityChangeWithUserID:(id)a0 voipModel:(id)a1 voipTracker:(id)a2;
- (void)trackVideoBillDurationWithVoipModel:(id)a0 voipTracker:(id)a1;
- (void)trackEventWithEventName:(id)a0 voipModel:(id)a1 voipTracker:(id)a2 otherParams:(id)a3;
- (void)onXrEngineUserUnpublishStream:(id)a0 type:(unsigned long long)a1 voipModel:(id)a2 voipTracker:(id)a3;
- (void)onXrEngineUserPublishStream:(id)a0 type:(unsigned long long)a1 voipModel:(id)a2 voipTracker:(id)a3;
- (void)onXrEngineFirstRemoteVideoFrameDecoded:(id)a0 withFrameInfo:(id)a1;
- (void)onXrEngine:(id)a0 onLocalStreamVideoFrame:(struct CGSize { double x0; double x1; })a1;
- (void)onXrEngine:(id)a0 remoteVideoStats:(id)a1 voipTracker:(id)a2;
- (void)onXrEngineJoinRoom;
- (void)onXrEngineDidLeaveRoomWithVoipModel:(id)a0 voipTracker:(id)a1;
- (void).cxx_destruct;

@end
