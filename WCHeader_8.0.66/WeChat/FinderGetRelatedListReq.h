@class FinderGetRelatedListReq_GetColumnFeedInfo, StreamTabTipsInfo, FinderCommByPass, FinderShareUserInfo, FinderSectionInfo, FinderBaseRequest, FinderGetRelatedListReq_SwitchColumnInfo, NSMutableArray, FinderGetRelatedListReq_MsgInfo, FinderGetRelatedEntranceInfo, FinderGetRelatedListReq_LastSessionReadInfo, NSString, FinderGetRelatedListReq_GetRelatedColumnTopicInfo, FinderCategoryInfo, BaseRequest, FinderClientStatus, FinderLiveBeforeJoinLiveRoomStatus, LongVideoPlayerContext, NSData, FinderLiveClientStatus;

@interface FinderGetRelatedListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int displayTabType;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *firstObjectReason;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) FinderSectionInfo *sectionInfo;
@property (retain, nonatomic) FinderCategoryInfo *catetoryFilter;
@property (retain, nonatomic) NSData *streamLastBuffer;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) FinderGetRelatedEntranceInfo *relatedEntranceInfo;
@property (retain, nonatomic) NSString *fromSessionId;
@property (retain, nonatomic) NSData *objectSessionInfo;
@property (retain, nonatomic) FinderGetRelatedListReq_SwitchColumnInfo *switchColumnInfo;
@property (retain, nonatomic) FinderGetRelatedListReq_GetColumnFeedInfo *getColumnFeedInfo;
@property (retain, nonatomic) NSMutableArray *stats;
@property (retain, nonatomic) FinderGetRelatedListReq_GetRelatedColumnTopicInfo *getRelatedColumnTopicInfo;
@property (retain, nonatomic) FinderLiveClientStatus *liveStatus;
@property (retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus;
@property (nonatomic) unsigned int ringToneEventType;
@property (nonatomic) unsigned int relatedFlag;
@property (nonatomic) unsigned int pullType;
@property (retain, nonatomic) StreamTabTipsInfo *tabTipsInfo;
@property (retain, nonatomic) LongVideoPlayerContext *longVideoPlayerContext;
@property (retain, nonatomic) FinderCommByPass *commByPass;
@property (nonatomic) unsigned int prefetchType;
@property (retain, nonatomic) NSData *collectionInfo;
@property (retain, nonatomic) NSData *relatedlistLastBuffer;
@property (retain, nonatomic) NSString *jumpInfoByPassInfo;
@property (retain, nonatomic) FinderGetRelatedListReq_MsgInfo *msgInfo;
@property (retain, nonatomic) NSData *nextObjectBuffer;
@property (nonatomic) unsigned long long clientControlFlag;
@property (retain, nonatomic) FinderShareUserInfo *shareUserInfo;
@property (retain, nonatomic) FinderGetRelatedListReq_LastSessionReadInfo *lastSessionReadInfo;

+ (void)initialize;

@end
