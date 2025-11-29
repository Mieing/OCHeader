@class NSString, AWEIMHighlyProspectiveRecommendURLModel;

@interface AWEIMHighlyProspectiveRecommendUserModel : AWEBaseApiModel

@property (nonatomic) long long uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEIMHighlyProspectiveRecommendURLModel *avatarThumb;
@property (copy, nonatomic) NSString *recommendReason;

+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
