@class FinderCommByPass, StreamBackupRequest, FinderBaseRequest, NSMutableArray, FinderSubTabItem, NSString, FinderLiveBeforeJoinLiveRoomStatus, FinderSwitch, BaseRequest, FinderStreamRelatedInfo, FinderClientStatus, NSData, FinderLiveClientStatus, FinderStreamSceneStatus;

@interface FinderStreamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int pullType;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSMutableArray *readStats;
@property (nonatomic) unsigned int prefetchConsumedFlag;
@property (nonatomic) unsigned int displayTabType;
@property (nonatomic) unsigned long long tabTipsObjectId;
@property (retain, nonatomic) NSString *tabTipsObjectNonceId;
@property (retain, nonatomic) NSMutableArray *stats;
@property (nonatomic) unsigned long long partialExposedObjectId;
@property (retain, nonatomic) NSMutableArray *markUnreadObjectList;
@property (retain, nonatomic) NSData *cardBuffer;
@property (nonatomic) unsigned int specialRequestScene;
@property (retain, nonatomic) NSString *tabTipsUsername;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;
@property (retain, nonatomic) FinderLiveClientStatus *liveStatus;
@property (retain, nonatomic) NSString *tabTipsPath;
@property (nonatomic) unsigned int requestSource;
@property (retain, nonatomic) FinderSwitch *finderSwitch;
@property (nonatomic) unsigned long long guideBarObjectId;
@property (retain, nonatomic) NSMutableArray *topObjects;
@property (nonatomic) unsigned int enterFinderProbability;
@property (retain, nonatomic) NSString *h5ByPass;
@property (retain, nonatomic) FinderCommByPass *commByPass;
@property (retain, nonatomic) FinderStreamSceneStatus *sceneStatus;
@property (retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus;
@property (nonatomic) unsigned int modelPrefetchConf;
@property (retain, nonatomic) FinderStreamRelatedInfo *relatedInfo;
@property (retain, nonatomic) FinderSubTabItem *subTab;
@property (retain, nonatomic) NSMutableArray *otherTabReadStats;
@property (retain, nonatomic) NSMutableArray *cacheFeeds;
@property (retain, nonatomic) StreamBackupRequest *backupRequest;
@property (retain, nonatomic) NSData *rerankLastBuffer;
@property (nonatomic) unsigned int locationGeneratedTime;
@property (nonatomic) unsigned long long clientControlFlag;
@property (retain, nonatomic) NSString *containerId;

+ (void)initialize;

@end
