@class NSTimer, NSDictionary, NSString;

@interface CJPayDyPayHeartBeatManager : NSObject

@property (retain, nonatomic) NSTimer *heartBeatTimer;
@property (nonatomic) unsigned long long currentHeartBeatStatus;
@property (copy, nonatomic) NSDictionary *trackData;
@property (nonatomic) double initialTime;
@property (nonatomic) long long heartBeatCount;
@property (copy, nonatomic) NSString *outLinkNode;

+ (id)sharedInstance;

- (void)p_startTimer;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)endHeartBeat;
- (void)p_endTimer;
- (void)p_endHeartBeatWithExtParams:(id)a0;
- (void)p_heartBeat:(id)a0;
- (double)p_heartBeatInterval;
- (double)p_heartBeatDuring;
- (id)p_trackParamsNode;
- (id)p_trackParamsTime;
- (void)startHeartBeatWithTrackData:(id)a0;
- (void).cxx_destruct;

@end
