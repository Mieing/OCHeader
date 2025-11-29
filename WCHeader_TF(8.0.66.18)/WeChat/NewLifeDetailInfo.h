@class NewLifeFinderPostInfo, NewLifeAutoShowInfo, NSString, FinderMention, NewLifeDetailReportInfo, FinderObject, NSMutableArray, NewLifeDetailThumbInfo;

@interface NewLifeDetailInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObject *finderObj;
@property (nonatomic) BOOL needGetDetail;
@property (nonatomic) BOOL isAuthorStatus;
@property (retain, nonatomic) NewLifeFinderPostInfo *postInfo;
@property (nonatomic) unsigned int enterScene;
@property (nonatomic) BOOL needRecommendStream;
@property (nonatomic) BOOL isDiscoverSearchEnabled;
@property (nonatomic) BOOL canOperateDiscoverSearch;
@property (nonatomic) BOOL isInitWithLoading;
@property (retain, nonatomic) NewLifeAutoShowInfo *autoShowInfo;
@property (retain, nonatomic) NewLifeDetailReportInfo *reportInfo;
@property (retain, nonatomic) NSMutableArray *relatedStreamLastBuffer;
@property (nonatomic) unsigned int entryScene;
@property (retain, nonatomic) FinderMention *finderMention;
@property (nonatomic) BOOL isShowSkipHome;
@property (retain, nonatomic) NewLifeDetailThumbInfo *detailThumbInfo;
@property (nonatomic) BOOL disableEdgeSlide;
@property (retain, nonatomic) NSString *udfKv;
@property (nonatomic) BOOL isPreview;

+ (void)initialize;

@end
