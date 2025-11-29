@class FinderLivePromoteMsgInfo, NSString, NSData;

@interface FinderLiveSyncPromoteInfoStatusWithSeqResp : WXPBGeneratedMessage

@property (nonatomic) unsigned int noOp;
@property (nonatomic) unsigned int promotingFlag;
@property (nonatomic) unsigned int needReplaceBuffer;
@property (retain, nonatomic) FinderLivePromoteMsgInfo *newPromoteInfo;
@property (nonatomic) unsigned long long reqCurrentPromotingId;
@property (retain, nonatomic) NSString *reqCurrentPromotingSubId;
@property (retain, nonatomic) NSData *syncContext;

+ (void)initialize;

- (id)promoteID;

@end
