@class NSNumber;

@interface RTVVoipConfig : JSONModel

@property (retain, nonatomic) NSNumber *is_open;
@property (retain, nonatomic) NSNumber *debugInfo;
@property (retain, nonatomic) NSNumber *callerTimeOut;
@property (retain, nonatomic) NSNumber *calleeTimeOut;
@property (retain, nonatomic) NSNumber *voipCallPollingPullSwitch;
@property (retain, nonatomic) NSNumber *groupVoipPrejoinRoom;
@property (retain, nonatomic) NSNumber *isGroupVoipEnable;
@property (retain, nonatomic) NSNumber *isFirstFrameTimeOptimizeEnable;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
