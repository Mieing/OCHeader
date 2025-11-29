@class NSString, BaseResponse;

@interface AdExposureResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *msg;

+ (void)initialize;

- (void)setMsg:(id)a0;
- (id)msg;
- (void)setRet:(int)a0;
- (int)ret;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
