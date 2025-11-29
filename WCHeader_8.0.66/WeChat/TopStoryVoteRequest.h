@class NSString;

@interface TopStoryVoteRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *docid;
@property (nonatomic) int voteType;
@property (nonatomic) unsigned int category;

+ (void)initialize;

@end
