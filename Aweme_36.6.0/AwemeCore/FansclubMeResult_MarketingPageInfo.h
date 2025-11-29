@class NSString;

@interface FansclubMeResult_MarketingPageInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *backgroundURL;
@property (copy, nonatomic) NSString *rightText;
@property (copy, nonatomic) NSString *rightTextColor;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
