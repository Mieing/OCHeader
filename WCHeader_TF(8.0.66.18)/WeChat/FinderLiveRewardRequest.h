@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderLiveBattleReportInfo, NSMutableArray;

@interface FinderLiveRewardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *rewardProductId;
@property (nonatomic) unsigned int rewardProductCount;
@property (nonatomic) unsigned int rewardAmountInWecoin;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *comboId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) BOOL comboFinish;
@property (retain, nonatomic) NSString *toMicUsername;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int rewardType;
@property (retain, nonatomic) NSData *rewardExtInfo;
@property (retain, nonatomic) NSData *customInfo;
@property (retain, nonatomic) FinderLiveBattleReportInfo *battleReportInfo;
@property (retain, nonatomic) NSMutableArray *prepareBuf;
@property (retain, nonatomic) NSString *rewardDurationId;
@property (retain, nonatomic) NSString *batchId;
@property (retain, nonatomic) NSString *switchSkinId;
@property (retain, nonatomic) NSMutableArray *prepareBufInfos;

+ (void)initialize;

@end
