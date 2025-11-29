@class NSMutableArray, BaseResponse;

@interface UploadDeviceStepResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *whiteListDevice;

+ (void)initialize;

- (void)setWhiteListDevice:(id)a0;
- (id)whiteListDevice;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
