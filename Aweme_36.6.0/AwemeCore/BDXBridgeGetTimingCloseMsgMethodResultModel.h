@class NSNumber;

@interface BDXBridgeGetTimingCloseMsgMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *totalCountdownTime;
@property (retain, nonatomic) NSNumber *remainCountdownTime;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSNumber *timingCloseType;
@property (retain, nonatomic) NSNumber *timingClosePreTime;
@property (retain, nonatomic) NSNumber *timingClosePreType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
