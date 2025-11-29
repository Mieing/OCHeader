@class NSString, NSDate;

@interface AWEUserContextManagerLoginMonitor : NSObject

@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *creatDate;
@property (nonatomic) unsigned long long platform;

- (id)initWith:(id)a0 startDate:(id)a1 platform:(unsigned long long)a2;
- (id)loginSuccessMonitorParams;
- (void).cxx_destruct;

@end
