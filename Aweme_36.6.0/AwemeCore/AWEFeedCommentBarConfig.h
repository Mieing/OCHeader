@class NSString, AWEURLModel;

@interface AWEFeedCommentBarConfig : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *barID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *intro;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) AWEURLModel *lightIconUrls;
@property (retain, nonatomic) AWEURLModel *darkIconUrls;
@property (nonatomic) long long priorityType;

+ (id)lightIconUrlsJSONTransformer;
+ (id)darkIconUrlsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
