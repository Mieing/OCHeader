@class NSString, NSDictionary;

@interface AWESearchVoiceInputContext : NSObject

@property (nonatomic) long long inputTimeoutRemind;
@property (nonatomic) long long inputTimeout;
@property (copy, nonatomic) NSString *appkey;
@property (retain, nonatomic) NSDictionary *asrExtra;

- (void).cxx_destruct;

@end
