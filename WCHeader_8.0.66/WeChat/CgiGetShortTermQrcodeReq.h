@class BaseRequest, NSString;

@interface CgiGetShortTermQrcodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fee;
@property (retain, nonatomic) NSString *feeType;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL payerDescRequired;
@property (retain, nonatomic) NSString *payerDescPlaceholder;
@property (nonatomic) int refreshScene;

+ (void)initialize;

@end
