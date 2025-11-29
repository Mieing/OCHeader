@class NSDictionary, NSNumber;

@interface IESECLiveRedpackActivityResponse : IESECLiveApiBaseModel

@property (retain, nonatomic) NSDictionary *redpack;
@property (nonatomic) BOOL overlap;
@property (nonatomic) long long expireDuration;
@property (retain, nonatomic) NSNumber *serverTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
