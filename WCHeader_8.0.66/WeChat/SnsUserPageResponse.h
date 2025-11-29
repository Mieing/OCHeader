@class SnsServerConfig, NSString, SnsDragon2024Info, SnsUserInfo, NSMutableArray, BaseResponse;

@interface SnsUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (nonatomic) unsigned int objectCount;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (nonatomic) unsigned int objectTotalCount;
@property (retain, nonatomic) SnsUserInfo *snsUserInfo;
@property (nonatomic) unsigned int newRequestTime;
@property (nonatomic) unsigned int objectCountForSameMd5;
@property (retain, nonatomic) SnsServerConfig *serverConfig;
@property (nonatomic) unsigned long long limitedId;
@property (nonatomic) unsigned long long continueId;
@property (retain, nonatomic) NSString *retTips;
@property (nonatomic) unsigned int yearMonthInfoCount;
@property (retain, nonatomic) NSMutableArray *yearMonthInfoList;
@property (nonatomic) BOOL prePageDayEndFlag;
@property (retain, nonatomic) NSString *newEndWording;
@property (nonatomic) unsigned int showWithTaEntrance;
@property (nonatomic) unsigned int topListObjectCount;
@property (retain, nonatomic) NSMutableArray *topListObjectList;
@property (nonatomic) unsigned long long topListNextPageMaxId;
@property (retain, nonatomic) SnsDragon2024Info *snsDragon2024Info;

+ (void)initialize;

- (void)setSnsDragon2024Info:(id)a0;
- (id)snsDragon2024Info;
- (void)setTopListNextPageMaxId:(unsigned long long)a0;
- (unsigned long long)topListNextPageMaxId;
- (void)setTopListObjectList:(id)a0;
- (id)topListObjectList;
- (void)setTopListObjectCount:(unsigned int)a0;
- (unsigned int)topListObjectCount;
- (void)setShowWithTaEntrance:(unsigned int)a0;
- (unsigned int)showWithTaEntrance;
- (void)setNewEndWording:(id)a0;
- (id)newEndWording;
- (void)setPrePageDayEndFlag:(BOOL)a0;
- (BOOL)prePageDayEndFlag;
- (void)setYearMonthInfoList:(id)a0;
- (id)yearMonthInfoList;
- (void)setYearMonthInfoCount:(unsigned int)a0;
- (unsigned int)yearMonthInfoCount;
- (void)setRetTips:(id)a0;
- (id)retTips;
- (void)setContinueId:(unsigned long long)a0;
- (unsigned long long)continueId;
- (void)setLimitedId:(unsigned long long)a0;
- (unsigned long long)limitedId;
- (void)setServerConfig:(id)a0;
- (id)serverConfig;
- (void)setObjectCountForSameMd5:(unsigned int)a0;
- (unsigned int)objectCountForSameMd5;
- (void)setNewRequestTime:(unsigned int)a0;
- (unsigned int)newRequestTime;
- (void)setSnsUserInfo:(id)a0;
- (id)snsUserInfo;
- (void)setObjectTotalCount:(unsigned int)a0;
- (unsigned int)objectTotalCount;
- (void)setObjectList:(id)a0;
- (id)objectList;
- (void)setObjectCount:(unsigned int)a0;
- (unsigned int)objectCount;
- (void)setFirstPageMd5:(id)a0;
- (id)firstPageMd5;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
