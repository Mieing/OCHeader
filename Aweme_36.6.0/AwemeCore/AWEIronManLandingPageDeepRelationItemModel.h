@class NSString, NSDictionary;

@interface AWEIronManLandingPageDeepRelationItemModel : AWEIronManLandingPageBaseRouterModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *statusDesc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonMsg;
@property (copy, nonatomic) NSString *trackerTag;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *orderStatus;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *couponInfo;
@property (copy, nonatomic) NSString *expireTime;
@property (copy, nonatomic) NSString *originalPrice;
@property (copy, nonatomic) NSString *currentPrice;
@property (copy, nonatomic) NSString *cardId;
@property (nonatomic) BOOL undertake;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSDictionary *messageInfo;
@property (copy, nonatomic) NSDictionary *imageExtra;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL trackFlag;
@property (nonatomic) BOOL clickFlag;

+ (id)JSONKeyPathsByPropertyKey;

- (id)transferToStorageDict;
- (void).cxx_destruct;
- (id)location;

@end
