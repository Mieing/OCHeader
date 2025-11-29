@class NSString, MMActiveStorageStatInfo, NSMutableArray;

@interface MMActiveStorageReportStatus : NSObject <PBCoding>

@property (nonatomic) unsigned int lastReportTime;
@property (nonatomic) unsigned int beforeCheckTime;
@property (nonatomic) unsigned int endCheckTime;
@property (retain, nonatomic) MMActiveStorageStatInfo *allStatInfo;
@property (retain, nonatomic) MMActiveStorageStatInfo *activeStatInfo;
@property (retain, nonatomic) NSMutableArray *finishUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastReportTime;
+ (void)PBArrayAdd_beforeCheckTime;
+ (void)PBArrayAdd_endCheckTime;
+ (void)PBArrayAdd_allStatInfo;
+ (void)PBArrayAdd_activeStatInfo;
+ (void)PBArrayAdd_finishUserName;
+ (void)initialize;
+ (id)loadStausDataFromFile;

- (id)getPBPropertyTable;
- (id)init;
- (BOOL)saveStatusDataToFile;
- (void).cxx_destruct;

@end
