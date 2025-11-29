@class NSMutableDictionary, NSMutableArray;

@interface IESLiveGiftPlayerPerfSampler : NSObject

@property (retain, nonatomic) NSMutableDictionary *baseParams;
@property (nonatomic) long long deviceFps;
@property (copy, nonatomic) id /* block */ fpsCallback;
@property (nonatomic) double initTime;
@property (nonatomic) long long captureTimes;
@property (retain, nonatomic) NSMutableArray *timingNodes;
@property (nonatomic, getter=isPlaying) BOOL playing;

- (void)didSetAttachingDIContext;
- (id)paramsForReport;
- (id)pr_commonParamsForDeviceState;
- (id)initWithRoomID:(id)a0 isAnchor:(BOOL)a1;
- (void)willStartPlayWithNode:(id)a0 totalDuration:(double)a1;
- (void)willPlayFrame:(id)a0 currentTime:(double)a1 extraParams:(id)a2;
- (void)didFinishPlayWithExtraParams:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
