@class NSString;

@interface FinderLiveVotingInfo_Choice : WXPBGeneratedMessage

@property (nonatomic) unsigned int choiceId;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int selfVoted;
@property (nonatomic) unsigned int selectCount;

+ (void)initialize;

@end
