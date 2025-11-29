@class NSString, NSMutableArray;

@interface FinderLiveVotingConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *question;
@property (retain, nonatomic) NSMutableArray *choiceList;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSString *votingId;

+ (void)initialize;

@end
