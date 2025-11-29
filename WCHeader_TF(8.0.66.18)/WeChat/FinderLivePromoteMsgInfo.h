@class NSData, NSString;

@interface FinderLivePromoteMsgInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isBeforeJoinLive;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL needGetJumpInfo;
@property (retain, nonatomic) NSData *promoteInfoBuffer;
@property (nonatomic) unsigned int cancel;
@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *jumpId;
@property (retain, nonatomic) NSData *extBuffer;
@property (nonatomic) unsigned int delayShowTime;
@property (nonatomic) unsigned int syncextrainfoRequestCmdid;
@property (nonatomic) unsigned int syncextrainfoRequestIntervalSec;
@property (nonatomic) unsigned int showTotalTime;
@property (nonatomic) BOOL syncextrainfoRequestRandom;
@property (nonatomic) BOOL showAfterSyncextrainfo;
@property (retain, nonatomic) NSString *subId;
@property (retain, nonatomic) NSData *reportExtBuffer;
@property (retain, nonatomic) NSData *businessExtBuffer;
@property (nonatomic) unsigned int showFixedIcon;

+ (void)initialize;

- (id)promoteID;

@end
