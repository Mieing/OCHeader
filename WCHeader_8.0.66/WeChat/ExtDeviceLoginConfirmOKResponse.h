@class NSData, NSString, BaseResponse;

@interface ExtDeviceLoginConfirmOKResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *msgContextPubKey;
@property (retain, nonatomic) NSString *syncRecordCtx;

+ (void)initialize;

@end
