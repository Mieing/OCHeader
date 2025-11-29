@class FinderLiveMsgDisplayInfo, FinderLiveReportBaseInfo, FinderLiveAudienceStatusInfo, FinderBaseRequest, FinderLiveBattleReportInfo, FinderGetLiveMsgReportInfo, FinderLiveSeiStatInfo, NSString, FinderLiveButtonDisplayInfo, BaseRequest, FinderLiveBoxId, NSData, FinderLiveClientStatus;

@interface FinderGetLiveMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) BOOL offline;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) FinderLiveClientStatus *status;
@property (retain, nonatomic) NSData *liveSei;
@property (retain, nonatomic) FinderLiveBoxId *currentBox;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (retain, nonatomic) FinderLiveBattleReportInfo *battleReportInfo;
@property (nonatomic) unsigned int offlineScene;
@property (retain, nonatomic) FinderGetLiveMsgReportInfo *getlivemsgReportInfo;
@property (retain, nonatomic) FinderLiveMsgDisplayInfo *displayInfo;
@property (retain, nonatomic) FinderLiveAudienceStatusInfo *audienceStatusInfo;
@property (retain, nonatomic) FinderLiveSeiStatInfo *seiStatInfo;
@property (retain, nonatomic) FinderLiveButtonDisplayInfo *buttonDisplayInfo;

+ (void)initialize;

@end
