@class SnsObject, BaseResponse;

@interface SnsWithTaOpResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SnsObject *obj;

+ (void)initialize;

@end
