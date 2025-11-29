@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetCollectionListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int businessType;

+ (void)initialize;

@end
