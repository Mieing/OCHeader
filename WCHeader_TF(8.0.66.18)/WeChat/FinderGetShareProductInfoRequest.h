@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetShareProductInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *ecSource;
@property (nonatomic) unsigned int reqType;
@property (retain, nonatomic) NSString *productCardKey;

+ (void)initialize;

@end
