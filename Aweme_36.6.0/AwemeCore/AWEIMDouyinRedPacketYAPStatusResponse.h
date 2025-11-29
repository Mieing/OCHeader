@class NSString;

@interface AWEIMDouyinRedPacketYAPStatusResponse : AWEBaseApiModel

@property (nonatomic) unsigned long long yapStatus;
@property (nonatomic) unsigned long long businessCode;
@property (copy, nonatomic) NSString *businessMsg;
@property (nonatomic) long long retryDelay;
@property (nonatomic) BOOL continueQuery;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
