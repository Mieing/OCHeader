@class NSString, NSMutableArray;

@interface WCFinderRedDotBusinessCTRModel : NSObject <PBCoding>

@property (nonatomic) unsigned long long businessType;
@property (nonatomic) long long svrUpdateTimeStamp;
@property (nonatomic) long long exposeLastUpdateTimeStamp;
@property (nonatomic) long long clickLastUpdateTimeStamp;
@property (retain, nonatomic) NSMutableArray *exposeCountArray;
@property (retain, nonatomic) NSMutableArray *clickCountArray;
@property (nonatomic) double cacheCtrValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_svrUpdateTimeStamp;
+ (void)PBArrayAdd_exposeLastUpdateTimeStamp;
+ (void)PBArrayAdd_clickLastUpdateTimeStamp;
+ (void)PBArrayAdd_exposeCountArray;
+ (void)PBArrayAdd_clickCountArray;
+ (void)initialize;
+ (long long)getCurrentTime;
+ (id)_increaseMarkArrayFrom:(id)a0 lastTimeStamp:(long long *)a1;
+ (id)_updateToTodayMarkArrayFrom:(id)a0 lastTimeStamp:(long long *)a1;

- (id)getPBPropertyTable;
- (id)initWithBusinessType:(unsigned long long)a0;
- (id)init;
- (void)commonInit;
- (long long)validCalcCount;
- (void)clearUselessArrayItem;
- (void)updateCountToToday;
- (double)getCurrentCtrValue;
- (void)increaseExpose;
- (void)makeCacheCtrValueInvalid;
- (void)increaseClick;
- (void).cxx_destruct;

@end
