@class TipsReportInfo, NSString, NSMutableDictionary, NSMutableSet;

@interface NewTipsInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int tipsId;
@property (nonatomic) unsigned int priority;
@property (nonatomic) unsigned int operate;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) unsigned long long tipsType;
@property (nonatomic) unsigned int beginShowTime;
@property (nonatomic) unsigned int disappearTime;
@property (nonatomic) unsigned int overdueTime;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) TipsReportInfo *reportInfo;
@property (nonatomic) unsigned int minVersion;
@property (nonatomic) unsigned int maxVersion;
@property (retain, nonatomic) NSMutableSet *allowRegions;
@property (retain, nonatomic) NSMutableSet *allowLanguage;
@property (nonatomic) BOOL disposed;
@property (nonatomic) BOOL hadBeginShow;
@property (nonatomic) unsigned int recieveTipsTime;
@property (nonatomic) unsigned int realBeginShowTime;
@property (nonatomic) unsigned int tipsDisposeTime;
@property (retain, nonatomic) NSMutableDictionary *dicShowInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tipsId;
+ (void)PBArrayAdd_priority;
+ (void)PBArrayAdd_operate;
+ (void)PBArrayAdd_uniqueId;
+ (void)PBArrayAdd_tipsType;
+ (void)PBArrayAdd_beginShowTime;
+ (void)PBArrayAdd_disappearTime;
+ (void)PBArrayAdd_overdueTime;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_minVersion;
+ (void)PBArrayAdd_maxVersion;
+ (void)PBArrayAdd_reportInfo;
+ (void)PBArrayAdd_disposed;
+ (void)PBArrayAdd_hadBeginShow;
+ (void)PBArrayAdd_recieveTipsTime;
+ (void)PBArrayAdd_realBeginShowTime;
+ (void)PBArrayAdd_tipsDisposeTime;
+ (void)PBArrayAdd_dicShowInfo;
+ (void)initialize;

@end
