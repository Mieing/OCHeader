@class NSString, BizRecArticleCard;

@interface TLRecArticleWrapper : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *recSummary;
@property (retain, nonatomic) NSString *aggregationUrl;
@property (retain, nonatomic) NSString *aggregationTitle;
@property (retain, nonatomic) NSString *event;
@property (retain, nonatomic) BizRecArticleCard *articleCard;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *exptType;

+ (void)initialize;

@end
