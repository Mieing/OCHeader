@class FinderSectionInfo, FinderBaseRequest, NSMutableArray, MusicLiveGetRelatedListReq_GetRelatedColumnTopicInfo, FinderGetRelatedEntranceInfo, NSString, FinderClientStatus, FinderCategoryInfo, BaseRequest, MusicLiveGetRelatedListReq_GetColumnFeedInfo, NSData, FinderLiveClientStatus, MusicLiveGetRelatedListReq_SwitchColumnInfo;

@interface MusicLiveGetRelatedListReq : WXPBGeneratedMessage

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
@property (retain, nonatomic) MusicLiveGetRelatedListReq_SwitchColumnInfo *switchColumnInfo;
@property (retain, nonatomic) MusicLiveGetRelatedListReq_GetColumnFeedInfo *getColumnFeedInfo;
@property (retain, nonatomic) NSMutableArray *stats;
@property (retain, nonatomic) MusicLiveGetRelatedListReq_GetRelatedColumnTopicInfo *getRelatedColumnTopicInfo;
@property (retain, nonatomic) FinderLiveClientStatus *liveStatus;

+ (void)initialize;

@end
