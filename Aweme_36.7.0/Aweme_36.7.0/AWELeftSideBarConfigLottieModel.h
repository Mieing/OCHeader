@class NSString, NSDictionary;

@interface AWELeftSideBarConfigLottieModel : AWELeftSideBarConfigBaseModel <NSCopying>

@property (copy, nonatomic) NSString *lottieUrl;
@property (nonatomic) long long lottieType;
@property (nonatomic) BOOL needLogin;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *businessId;
@property (nonatomic) BOOL necessaryOpenSidebar;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *lightThemeImageUrl;
@property (nonatomic) double lottieDuration;
@property (nonatomic) double showDuration;
@property (copy, nonatomic) NSDictionary *businessExtraData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
