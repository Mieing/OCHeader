@class NSString, AWEURLModel;

@interface AWEVCDUserModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) long long userID;
@property (retain, nonatomic) AWEURLModel *avatarUrl;
@property (nonatomic) long long followersCount;
@property (nonatomic) long long followingCount;

+ (id)avatarUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
