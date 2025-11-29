@class NSString;

@interface AWEFeedCommentBarConfig : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *intro;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long expireTime;
@property (nonatomic) long long priorityType;

+ (id)lightIconUrlsJSONTransformer;
+ (id)darkIconUrlsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
