@interface TTObservation : NSObject

@property (nonatomic) unsigned long long tcpRtt;
@property (nonatomic) unsigned long long httpRtt;
@property (nonatomic) long long netQualityType;
@property (nonatomic) long long realNetSpeed;
@property (nonatomic) unsigned long long checkResult;
@property (nonatomic) long long throttleSpeed;

@end
