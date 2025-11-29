@class NSString;

@interface AWEVideoGameDataChannelConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *gumID;
@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) long long videoStayLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
