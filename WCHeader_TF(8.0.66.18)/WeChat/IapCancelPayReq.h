@class BaseRequest, NSString;

@interface IapCancelPayReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSString *openKey;
@property (retain, nonatomic) NSString *offerid;
@property (retain, nonatomic) NSString *urlParams;
@property (nonatomic) int fee;
@property (retain, nonatomic) NSString *productId;

+ (void)initialize;

@end
