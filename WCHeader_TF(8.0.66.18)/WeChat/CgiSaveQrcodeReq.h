@class BaseRequest, NSString, NSData;

@interface CgiSaveQrcodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fee;
@property (retain, nonatomic) NSString *feeType;
@property (retain, nonatomic) NSString *usage;
@property (retain, nonatomic) NSString *latitude;
@property (retain, nonatomic) NSString *longitude;
@property (retain, nonatomic) NSString *locationTimestamp;
@property (retain, nonatomic) NSData *saveNotifyInfo;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL payerDescRequired;
@property (retain, nonatomic) NSString *payerDescPlaceholder;

+ (void)initialize;

@end
