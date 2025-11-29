@class NSString;

@interface ABTestExpKeyItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *nsArgKey;
@property (retain, nonatomic) NSString *nsValue;
@property (retain, nonatomic) NSString *nsExpId;
@property (nonatomic) unsigned int uiSeq;
@property (nonatomic) unsigned int uiBeginTime;
@property (nonatomic) unsigned int uiEndTime;
@property (nonatomic) unsigned int uiPriorityLevel;
@property (nonatomic) BOOL bNoReport;
@property (nonatomic) unsigned int uiMonitorHitId;
@property (nonatomic) unsigned int uiMonitorHitKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsArgKey;
+ (void)PBArrayAdd_nsValue;
+ (void)PBArrayAdd_nsExpId;
+ (void)PBArrayAdd_uiSeq;
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiPriorityLevel;
+ (void)PBArrayAdd_bNoReport;
+ (void)PBArrayAdd_uiMonitorHitId;
+ (void)PBArrayAdd_uiMonitorHitKey;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isExpRunning;
- (BOOL)isExpired;
- (BOOL)isExpiredWithExpiredIds:(id)a0;
- (BOOL)shouldBeReplaceByOther:(id)a0;
- (void).cxx_destruct;

@end
