@class NSString, NSArray, AWEURLModel;

@interface AWEIMSubscribeCardModel : AWEBaseApiModel

@property (nonatomic) long long cardId;
@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (nonatomic) long long receiveTime;
@property (copy, nonatomic) NSArray *articleList;

+ (id)avatarJSONTransformer;
+ (id)articleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
