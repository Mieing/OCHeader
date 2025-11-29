@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetFoldedListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *friendUsername;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;

+ (void)initialize;

@end
