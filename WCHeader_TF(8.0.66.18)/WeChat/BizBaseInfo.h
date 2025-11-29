@class NSString;

@interface BizBaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int originalArticleCount;
@property (nonatomic) unsigned int friendSubscribeCount;
@property (nonatomic) unsigned int isSubscribed;
@property (retain, nonatomic) NSString *originalContentStr;
@property (retain, nonatomic) NSString *friendSubscribeStr;
@property (retain, nonatomic) NSString *bizRecommendUrl;

+ (void)initialize;

@end
