@class NSString;

@interface AWEUserPermissionModel : AWEBaseApiModel

@property (nonatomic) long long followToast;
@property (nonatomic) long long originalList;
@property (nonatomic) long long shopToast;
@property (nonatomic) long long shareToast;
@property (nonatomic) long long followingFollowerListToast;
@property (nonatomic) long long fansPageToast;
@property (nonatomic) BOOL isHitActiveFansGrayed;
@property (nonatomic) long long followToastTypeNew;
@property (copy, nonatomic) NSString *profileToast;
@property (copy, nonatomic) NSString *shareProfileToast;

+ (id)followToastJSONTransformer;
+ (id)followToastTypeNewJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
