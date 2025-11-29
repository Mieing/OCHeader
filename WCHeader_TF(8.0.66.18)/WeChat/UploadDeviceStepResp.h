@class NSMutableArray, BaseResponse;

@interface UploadDeviceStepResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *whiteListDevice;

+ (void)initialize;

@end
