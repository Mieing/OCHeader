@class BaseRequest, NSString, FinderComboLikeInfo, FinderBaseRequest, FinderInteractionMileStoneInfo, FinderFavNewLifeReportInfo;

@interface FinderFavReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned long long favId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) FinderFavNewLifeReportInfo *newlifeReportInfo;
@property (retain, nonatomic) FinderComboLikeInfo *comboLikeInfo;
@property (retain, nonatomic) FinderInteractionMileStoneInfo *showMilestoneInfo;

+ (void)initialize;

@end
