@class NSArray, NSString;

@interface AWECodeGenDouyinContentPayChargePermissionResponse : AWEBaseResponseModel

@property (nonatomic) BOOL entrance;
@property (nonatomic) int create;
@property (copy, nonatomic) NSArray *permissionInfosModelArray;
@property (copy, nonatomic) NSString *gifGuideUrl;
@property (nonatomic) int gifGuideShowTimes;
@property (copy, nonatomic) NSString *paidAgreementSchema;
@property (nonatomic) int topTipsShowTimes;
@property (nonatomic) long long minChargeVideoDuration;
@property (nonatomic) BOOL limitFree;
@property (nonatomic) BOOL trialChange;
@property (copy, nonatomic) NSString *helpSchema;
@property (nonatomic) long long subscribeMemberFreeTag;
@property (copy, nonatomic) NSString *vipAuthorHomepageSchema;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
