@class BaseRequest, NSString;

@interface SetTranslationLanguageOplogReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) BOOL useTranslationLanguage;
@property (retain, nonatomic) NSString *translationLanguage;

+ (void)initialize;

@end
