@class BaseRequest, FinderBaseRequest, NSData;

@interface FinderLiveGetPaymentItemsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *paymentBuff;

+ (void)initialize;

@end
