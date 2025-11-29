@class NSArray, MMKV;

@interface AWERelatedRecomendPanelRecord : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) double beginOfToday;
@property (nonatomic) unsigned long long showTimesToday;
@property (nonatomic) unsigned long long noInterestTimes;
@property (nonatomic) unsigned long long continuousNoConsuptionTimes;
@property (copy, nonatomic) NSArray *awemeIdRecord;

+ (id)dateOfHour:(long long)a0 date:(id)a1;
+ (id)dateOfHour:(long long)a0 minute:(long long)a1 date:(id)a2;
+ (id)currentDate;
+ (double)currentTimestamp;

- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofArray:(id)a1;
- (void)checkCrossDay;
- (void)addRecordForAwemeId:(id)a0;
- (void).cxx_destruct;

@end
