@class NSString, CardMiniAppInfo;

@interface CardHomePageFAQItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *faqWording;
@property (nonatomic) int faqOpType;
@property (retain, nonatomic) NSString *faqJumpUrl;
@property (retain, nonatomic) CardMiniAppInfo *faqMiniAppInfo;
@property (retain, nonatomic) NSString *faqNativeUrl;

+ (void)initialize;

@end
