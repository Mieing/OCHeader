@interface WCFinderDateCountInfo : NSObject

@property (nonatomic) unsigned long long date;
@property (nonatomic) unsigned long long count;

+ (id)dateCount:(unsigned long long)a0 keepToday:(BOOL)a1;
+ (id)dateFromNumber:(unsigned long long)a0;
+ (BOOL)date1:(unsigned long long)a0 fromDate2:(unsigned long long)a1 diffNDay:(unsigned long long)a2;

- (unsigned long long)toDateNumber;
- (void)increaseCount;
- (void)increaseTotalCount;
- (BOOL)dateMoreThanNDay:(unsigned long long)a0 beforeToday:(unsigned long long)a1;
- (unsigned long long)getTodayWithUpdateFlag:(BOOL)a0;

@end
