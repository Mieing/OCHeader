@class DataReportSubstitutePage;

@interface DataReportStayInfo : NSObject

@property (nonatomic) unsigned long long inTime;
@property (nonatomic) unsigned long long stayTime;
@property (retain, nonatomic) DataReportSubstitutePage *page;
@property (nonatomic) BOOL isReportOut;

- (id)toString;
- (void).cxx_destruct;

@end
