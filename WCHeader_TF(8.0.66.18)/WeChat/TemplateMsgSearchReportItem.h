@class NSString;

@interface TemplateMsgSearchReportItem : NSObject

@property (nonatomic) unsigned long long EventID;
@property (nonatomic) unsigned long long TimeSecond;
@property (retain, nonatomic) NSString *OperateResult;
@property (nonatomic) unsigned long long OperatePage;

- (void)report;
- (void).cxx_destruct;

@end
