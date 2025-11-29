@class BaseRequest, FinderBaseRequest, NSData;

@interface FinderGetPaidCollectionListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
