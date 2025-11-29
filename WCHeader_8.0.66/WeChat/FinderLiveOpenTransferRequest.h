@class FinderLiveOpenBaseRequest, BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveOpenTransferRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderLiveOpenBaseRequest *finderLiveBasereq;
@property (retain, nonatomic) NSData *reqBuffer;
@property (retain, nonatomic) NSString *reqJson;

+ (void)initialize;

@end
