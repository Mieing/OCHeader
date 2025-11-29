@class NSString;

@interface AWELivePaidLiveBaseInfo : AWEBaseApiModel

@property (nonatomic) long long ticketSessionId;
@property (copy, nonatomic) NSString *ticketSessionIdStr;
@property (nonatomic) int viewRight;
@property (nonatomic) int delivery;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
