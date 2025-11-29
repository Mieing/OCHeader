@class SnsTag, BaseResponse;

@interface SnsTagOptionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SnsTag *snsTag;

+ (void)initialize;

@end
