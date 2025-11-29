@class FinderLikeNewLifeReportInfo, NSString, FinderBaseRequest, NSData, BaseRequest, FinderInteractionMileStoneInfo, NSMutableArray, FinderComboLikeInfo;

@interface FinderLikeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long objectid;
@property (nonatomic) unsigned long long commentid;
@property (nonatomic) unsigned int optype;
@property (nonatomic) unsigned long long likeid;
@property (nonatomic) unsigned int curLikeCount;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSString *likeUsername;
@property (nonatomic) unsigned int isPrivate;
@property (nonatomic) unsigned int visibilityMode;
@property (retain, nonatomic) NSMutableArray *visibilityLabelIdList;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) NSString *exportId;
@property (nonatomic) unsigned int platformScene;
@property (retain, nonatomic) FinderLikeNewLifeReportInfo *newlifeReportInfo;
@property (retain, nonatomic) FinderComboLikeInfo *comboLikeInfo;
@property (retain, nonatomic) FinderInteractionMileStoneInfo *showMilestoneInfo;
@property (retain, nonatomic) NSData *bypassBuffer;
@property (nonatomic) unsigned int bypassBufferType;

+ (void)initialize;

@end
