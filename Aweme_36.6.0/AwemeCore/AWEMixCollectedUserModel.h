@class NSString, AWEURLModel;

@interface AWEMixCollectedUserModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (nonatomic) double collectTimestamp;
@property (nonatomic) BOOL isFromNotice;
@property (nonatomic) long long hideHerPostStatus;
@property (nonatomic) BOOL privateAccount;

+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
