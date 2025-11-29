@class BaseResponse;

@interface InitRegResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int abtest;

+ (void)initialize;

@end
