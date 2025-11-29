@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderAcctRecommendRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
