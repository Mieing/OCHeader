@class NSData, NSString, TagSearchInfo, PoiCtrlInfo, ChildMode, LbsLocationNew, SnsCtrlInfo, NSMutableArray, TagCtrlInfo;

@interface WebSearchRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int isHomePage;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned long long businessType;
@property (nonatomic) unsigned int cliVersion;
@property (retain, nonatomic) LbsLocationNew *location;
@property (retain, nonatomic) NSMutableArray *matchUserList;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned int sceneActionType;
@property (retain, nonatomic) NSString *sugId;
@property (retain, nonatomic) NSString *prefixSug;
@property (nonatomic) unsigned int sugType;
@property (retain, nonatomic) NSMutableArray *prefixQuery;
@property (nonatomic) unsigned int displayPattern;
@property (retain, nonatomic) TagSearchInfo *tagInfo;
@property (retain, nonatomic) NSMutableArray *extReqParams;
@property (retain, nonatomic) NSMutableArray *numConditions;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSData *weAppCtrlInfo;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSData *boxCtrlInfo;
@property (retain, nonatomic) SnsCtrlInfo *snsInfo;
@property (retain, nonatomic) PoiCtrlInfo *poiInfo;
@property (nonatomic) unsigned int darkMode;
@property (retain, nonatomic) ChildMode *childMode;
@property (retain, nonatomic) TagCtrlInfo *tagExtInfo;

+ (void)initialize;

@end
