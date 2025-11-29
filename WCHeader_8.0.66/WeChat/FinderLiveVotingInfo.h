@class NSString, NSMutableArray;

@interface FinderLiveVotingInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *question;
@property (retain, nonatomic) NSMutableArray *choiceList;
@property (nonatomic) unsigned int remainTime;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *votingId;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int showRemainTime;
@property (nonatomic) unsigned int participateCount;
@property (nonatomic) unsigned int disableResult;
@property (retain, nonatomic) NSString *sourceRoomName;

+ (void)initialize;

@end
