@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetLiveTabsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *byPass;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *encryptedObjectId;
@property (retain, nonatomic) NSString *objectNonceId;

+ (void)initialize;

@end
