@class NSString, BaseResponse;

@interface AdExposureResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *msg;

+ (void)initialize;

@end
