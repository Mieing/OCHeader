@class NSString;

@interface BizBaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int originalArticleCount;
@property (nonatomic) unsigned int friendSubscribeCount;
@property (nonatomic) unsigned int isSubscribed;
@property (retain, nonatomic) NSString *originalContentStr;
@property (retain, nonatomic) NSString *friendSubscribeStr;
@property (retain, nonatomic) NSString *bizRecommendUrl;

+ (void)initialize;

- (void)setBizRecommendUrl:(id)a0;
- (id)bizRecommendUrl;
- (void)setFriendSubscribeStr:(id)a0;
- (id)friendSubscribeStr;
- (void)setOriginalContentStr:(id)a0;
- (id)originalContentStr;
- (void)setIsSubscribed:(unsigned int)a0;
- (unsigned int)isSubscribed;
- (void)setFriendSubscribeCount:(unsigned int)a0;
- (unsigned int)friendSubscribeCount;
- (void)setOriginalArticleCount:(unsigned int)a0;
- (unsigned int)originalArticleCount;

@end
