@class NSString, NSDate;

@interface WCDBBackupRecord : NSObject <PBCoding>

@property (nonatomic) long long bakeupSize;
@property (nonatomic) long long backupTimes;
@property (retain, nonatomic) NSDate *startRecordTime;
@property (nonatomic) long long walFrameCount;
@property (nonatomic) long long tableCount;
@property (nonatomic) long long associatedTableCount;
@property (nonatomic) long long leafPageCount;
@property (nonatomic) long long processTime;
@property (nonatomic) long long skipTimes;
@property (nonatomic) long long actualCPUProcessTime;
@property (nonatomic) long long getCPUTimeFalseTimes;
@property (retain, nonatomic) NSDate *beginBackupTime;
@property (nonatomic) unsigned long long beginBackupCPUTime;
@property (nonatomic) unsigned int incrementalBackupTimes;
@property (nonatomic) long long incrementalMaterialSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bakeupSize;
+ (void)PBArrayAdd_backupTimes;
+ (void)PBArrayAdd_startRecordTime;
+ (void)PBArrayAdd_walFrameCount;
+ (void)PBArrayAdd_tableCount;
+ (void)PBArrayAdd_associatedTableCount;
+ (void)PBArrayAdd_leafPageCount;
+ (void)PBArrayAdd_processTime;
+ (void)PBArrayAdd_beginBackupTime;
+ (void)PBArrayAdd_skipTimes;
+ (void)PBArrayAdd_actualCPUProcessTime;
+ (void)PBArrayAdd_getCPUTimeFalseTimes;
+ (void)PBArrayAdd_beginBackupCPUTime;
+ (void)PBArrayAdd_incrementalBackupTimes;
+ (void)PBArrayAdd_incrementalMaterialSize;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
