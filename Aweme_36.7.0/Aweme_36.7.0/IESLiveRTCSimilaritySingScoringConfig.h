@class IESLiveRTCRemoteStreamKey;

@interface IESLiveRTCSimilaritySingScoringConfig : NSObject

@property (nonatomic) int calculateIntervalMs;
@property (nonatomic) int mode;
@property (retain, nonatomic) IESLiveRTCRemoteStreamKey *refStream;

- (id)toByteRTCSimilaritySingScoringConfig;
- (void).cxx_destruct;

@end
