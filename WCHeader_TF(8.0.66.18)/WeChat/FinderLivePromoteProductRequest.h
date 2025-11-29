@class BaseRequest, NSString, ShopItemIDUnit, FinderBaseRequest;

@interface FinderLivePromoteProductRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int promoteType;
@property (nonatomic) BOOL promoteGivePresent;
@property (nonatomic) int promotingBusinessType;
@property (retain, nonatomic) ShopItemIDUnit *item;

+ (void)initialize;

@end
