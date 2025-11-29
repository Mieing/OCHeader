@class BusinessContent, BaseResponse;

@interface SearchDetailPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BusinessContent *content;
@property (nonatomic) unsigned int offset;

+ (void)initialize;

@end
