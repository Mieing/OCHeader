@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetShopShelfRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *shopRequestId;
@property (retain, nonatomic) NSString *stockId;
@property (nonatomic) unsigned int pullScene;
@property (retain, nonatomic) NSData *uxInfo;
@property (nonatomic) unsigned long long spuId;
@property (nonatomic) unsigned int productType;
@property (retain, nonatomic) NSData *productExtInfo;
@property (retain, nonatomic) NSString *ecSource;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

@end
