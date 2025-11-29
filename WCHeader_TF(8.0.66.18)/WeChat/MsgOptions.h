@class NSData, NSString, TopicInfo, MsgChannelInfo, NSMutableArray, TickleInfo, ChosenInfo, VoteInfo;

@interface MsgOptions : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *atList;
@property (retain, nonatomic) NSString *complaintUrl;
@property (retain, nonatomic) NSData *cliLocalData;
@property (nonatomic) unsigned int msgBizType;
@property (nonatomic) BOOL selfMsg;
@property (nonatomic) unsigned long long replySeq;
@property (retain, nonatomic) VoteInfo *voteInfo;
@property (nonatomic) unsigned int bgType;
@property (retain, nonatomic) ChosenInfo *chosenInfo;
@property (retain, nonatomic) MsgChannelInfo *msgChannelInfo;
@property (retain, nonatomic) TopicInfo *topicInfo;
@property (retain, nonatomic) TickleInfo *tickleInfo;

+ (void)initialize;

@end
