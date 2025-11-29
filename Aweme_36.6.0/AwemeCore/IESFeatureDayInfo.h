@class NSMutableArray;

@interface IESFeatureDayInfo : NSObject <NSCoding> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableArray *dayInfoList;
@property (nonatomic) long long lastEndTimeMsInt;
@property (nonatomic) long long currentBootTimeMs;
@property (nonatomic) long long appDeactiveGapTimeMs;

- (void)doLock;
- (void)doUnlock;
- (long long)getOpenCountOfDays:(long long)a0;
- (long long)getOpenAvgTimeOfDays:(long long)a0;
- (long long)getOpenTotalTimeOfDays:(long long)a0;
- (long long)getOpenMaxTimeOfDays:(long long)a0;
- (long long)getOpenMinTimeOfDays:(long long)a0;
- (void)recordAppEndTimeMs:(long long)a0;
- (void)recordAppBootTimeMs:(long long)a0;
- (void)fillDayInfos:(id)a0;
- (long long)gapDayBetweenLateDate1:(id)a0 date2:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
