@class NSString, NSMutableArray;

@interface VoteInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *latestVoterUsernameList;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int showType;
@property (nonatomic) BOOL votedByMe;
@property (nonatomic) BOOL canVote;

+ (void)initialize;

@end
