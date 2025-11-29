@class BaseRequest, NSString;

@interface CgiGetShortTermQrcodeMchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fee;
@property (retain, nonatomic) NSString *feeType;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL payerDescRequired;
@property (retain, nonatomic) NSString *payerDescPlaceholder;
@property (nonatomic) int refreshScene;
@property (nonatomic) unsigned long long shopId;

+ (void)initialize;

@end
