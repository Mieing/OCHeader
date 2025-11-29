@class SnsTag, BaseResponse;

@interface SnsTagMemberOptionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SnsTag *snsTag;

+ (void)initialize;

@end
