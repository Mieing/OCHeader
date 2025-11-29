@class FinderVideoDesc, NSString;

@interface FinderVideo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) FinderVideoDesc *desc;
@property (nonatomic) unsigned int forwardCount;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int commentCount;
@property (nonatomic) unsigned int favCount;
@property (nonatomic) unsigned int friendLikeCount;
@property (nonatomic) unsigned int spamFlag;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned long long firstBindId;
@property (nonatomic) BOOL isTest;

+ (void)initialize;

@end
