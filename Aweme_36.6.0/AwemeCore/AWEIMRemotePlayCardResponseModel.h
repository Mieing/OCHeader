@class NSString;

@interface AWEIMRemotePlayCardResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *messageID;
@property (nonatomic) BOOL isLive;
@property (nonatomic) long long linkDays;
@property (nonatomic) long long linkInterval;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
