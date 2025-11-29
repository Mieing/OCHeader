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

@end
