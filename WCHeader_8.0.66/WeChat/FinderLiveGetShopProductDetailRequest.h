@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetShopProductDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *shopRequestId;
@property (retain, nonatomic) NSData *uxInfo;
@property (retain, nonatomic) NSString *ecSource;
@property (nonatomic) unsigned int reqScene;
@property (retain, nonatomic) NSString *itemSessionBuff;

+ (void)initialize;

@end
