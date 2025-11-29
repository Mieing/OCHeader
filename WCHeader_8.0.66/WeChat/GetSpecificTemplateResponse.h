@class VideoTemplate, ShortUrlBindingTemplates, BaseResponse;

@interface GetSpecificTemplateResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) VideoTemplate *tpl;
@property (nonatomic) unsigned int maxAge;
@property (retain, nonatomic) ShortUrlBindingTemplates *shortUrlTmpl;

+ (void)initialize;

@end
