@class NSString;

@interface AWEIronManLandingPageSolidEntranceItemModel : AWEIronManLandingPageBaseRouterModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *linkUrl;
@property (copy, nonatomic) NSString *showText;
@property (nonatomic) long long unreadCount;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *moduleType;
@property (nonatomic) long long entranceType;
@property (nonatomic) BOOL trackFlag;

+ (id)JSONKeyPathsByPropertyKey;

- (void)processData;
- (void).cxx_destruct;
- (id)location;

@end
