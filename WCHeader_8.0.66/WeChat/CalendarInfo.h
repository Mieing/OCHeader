@class NSString;

@interface CalendarInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int ds;
@property (nonatomic) unsigned long long firstExposeTimeMs;
@property (nonatomic) unsigned int exposeCount;
@property (retain, nonatomic) NSString *lastTipsId;
@property (nonatomic) unsigned int tipsIdExposeCount;
@property (nonatomic) unsigned int enterCount;
@property (nonatomic) unsigned int enterWithRedDotCount;
@property (nonatomic) unsigned long long totalStayTimeMs;
@property (nonatomic) unsigned int dropRedDotCount;
@property (nonatomic) unsigned int deepReadCount;
@property (retain, nonatomic) NSString *stayTimeSecList;
@property (retain, nonatomic) NSString *finderVvList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_ds;
+ (void)PBArrayAdd_firstExposeTimeMs;
+ (void)PBArrayAdd_exposeCount;
+ (void)PBArrayAdd_lastTipsId;
+ (void)PBArrayAdd_tipsIdExposeCount;
+ (void)PBArrayAdd_enterCount;
+ (void)PBArrayAdd_enterWithRedDotCount;
+ (void)PBArrayAdd_totalStayTimeMs;
+ (void)PBArrayAdd_dropRedDotCount;
+ (void)PBArrayAdd_deepReadCount;
+ (void)PBArrayAdd_stayTimeSecList;
+ (void)PBArrayAdd_finderVvList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)reset;
- (void).cxx_destruct;

@end
