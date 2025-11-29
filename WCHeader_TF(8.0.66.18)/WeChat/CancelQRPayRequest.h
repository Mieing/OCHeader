@class BaseRequest, NSString, ActionLocation;

@interface CancelQRPayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrUuid;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) ActionLocation *actionLocation;

+ (void)initialize;

@end
