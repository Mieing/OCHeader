@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEShareSchemaPlayRemoteModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *secUid;
@property (retain, nonatomic) NSArray *participantsAvatarURLList;
@property (retain, nonatomic) NSNumber *totalCount;
@property (nonatomic) BOOL isOwnerSecret;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (nonatomic) BOOL blocked;

+ (id)participantsAvatarURLListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
