@class NSString, BaseResponse;

@interface TransferMsgToDeviceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *stringToDevice;

+ (void)initialize;

@end
