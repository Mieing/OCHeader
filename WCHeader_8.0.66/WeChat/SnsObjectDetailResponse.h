@class SnsObject, BaseResponse;

@interface SnsObjectDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SnsObject *object;

+ (void)initialize;

@end
