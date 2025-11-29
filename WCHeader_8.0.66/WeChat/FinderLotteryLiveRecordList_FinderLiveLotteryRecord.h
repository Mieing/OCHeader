@class NSString, NSData, NSMutableArray, FinderContact;

@interface FinderLotteryLiveRecordList_FinderLiveLotteryRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned int liveStartTime;
@property (retain, nonatomic) NSMutableArray *lotteryInfo;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) int retCode;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSMutableArray *info;
@property (nonatomic) unsigned int supportMultiType;
@property (retain, nonatomic) FinderContact *anthorContact;

+ (void)initialize;

@end
