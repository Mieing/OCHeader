@class NSString;

@interface FinderModMentionRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long svrMentionId;

+ (void)initialize;

@end
