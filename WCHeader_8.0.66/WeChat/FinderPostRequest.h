@class NSData, NSString, FinderBaseRequest, FinderObjectDesc, BaseRequest, FinderPostTraceInfo, FinderPostOriginInfo, FinderPostNewLifeInfo, NSMutableArray, FinderVideoDesc, FinderAttachmentList;

@interface FinderPostRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) FinderObjectDesc *objectDesc;
@property (retain, nonatomic) NSString *clientid;
@property (nonatomic) unsigned long long refObjectid;
@property (retain, nonatomic) NSString *refObjectNonceId;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) float feedLongitude;
@property (nonatomic) float feedLatitude;
@property (nonatomic) unsigned int isCreatedInFinder;
@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) unsigned int originalFlag;
@property (nonatomic) unsigned long long likeid;
@property (retain, nonatomic) NSMutableArray *musicDocId;
@property (retain, nonatomic) NSData *eupdOob;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) FinderVideoDesc *videoDescNoneed;
@property (retain, nonatomic) FinderAttachmentList *attachmentList;
@property (retain, nonatomic) NSString *groupBgmUrl;
@property (nonatomic) unsigned int groupPostType;
@property (nonatomic) unsigned int objectType;
@property (nonatomic) unsigned long long eventTopicId;
@property (nonatomic) unsigned int waitType;
@property (nonatomic) unsigned int handleFlag;
@property (nonatomic) unsigned long long clubId;
@property (nonatomic) unsigned long long postFlag;
@property (nonatomic) unsigned int postScene;
@property (retain, nonatomic) NSData *sdkMediaFeature;
@property (retain, nonatomic) FinderPostTraceInfo *traceInfo;
@property (nonatomic) unsigned long long assistantDraftObjectId;
@property (retain, nonatomic) FinderPostOriginInfo *originInfo;
@property (retain, nonatomic) NSString *highlightTopic;
@property (nonatomic) unsigned int tagType;
@property (retain, nonatomic) NSString *tagSecKey;
@property (retain, nonatomic) FinderPostNewLifeInfo *newlifeInfo;
@property (retain, nonatomic) NSData *finderSecretData;
@property (nonatomic) unsigned int noNeedResponseInfo;
@property (retain, nonatomic) NSData *clipbundleTimeline;
@property (retain, nonatomic) NSString *clipbundleJson;

+ (void)initialize;

@end
