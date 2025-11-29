@class BaseRequest, FinderLiveTransferBaseRequest, NSData, FinderBaseRequest;

@interface FinderLiveTransferRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderLiveTransferBaseRequest *transferBasereq;
@property (retain, nonatomic) NSData *reqdata;

+ (void)initialize;

@end
