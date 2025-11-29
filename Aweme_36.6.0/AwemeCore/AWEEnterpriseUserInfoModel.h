@class NSArray, NSString, AWEEnterpriseUserELiteCenterModel, AWEEnterpriseProfileInterceptModel;

@interface AWEEnterpriseUserInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *permissions;
@property (copy, nonatomic) NSArray *profileHeaderImageURLs;
@property (copy, nonatomic) NSString *eRoleKey;
@property (copy, nonatomic) NSString *atticInfoPicUrl;
@property (copy, nonatomic) NSString *atticInfoIronManUrl;
@property (copy, nonatomic) NSArray *tabCeilingToasts;
@property (copy, nonatomic) NSArray *limiters;
@property (nonatomic) BOOL isShowPontential;
@property (retain, nonatomic) AWEEnterpriseUserELiteCenterModel *eliteCenter;
@property (retain, nonatomic) AWEEnterpriseProfileInterceptModel *profileInterceptModel;
@property (copy, nonatomic) NSString *profileLinkEditURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)permissionsJSONTransformer;
+ (id)profileHeaderImageURLsJSONTransformer;
+ (id)limitersJSONTransformer;
+ (id)tabCeilingToastsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
