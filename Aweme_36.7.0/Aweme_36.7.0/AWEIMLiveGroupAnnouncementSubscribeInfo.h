@class NSArray;

@interface AWEIMLiveGroupAnnouncementSubscribeInfo : AWEBaseApiModel

@property (nonatomic) unsigned long long subscribeCount;
@property (copy, nonatomic) NSArray *subscribeList;
@property (nonatomic) unsigned long long subscribeStatus;

+ (id)subscribeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
