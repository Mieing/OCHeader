@class NSMutableString;

@interface WCNewClickStatReportData : MMObject

@property (retain, nonatomic) NSMutableString *eventIDList;
@property (nonatomic) unsigned int seq;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int indexCnt;
@property (nonatomic) unsigned int reverseInt1;
@property (nonatomic) unsigned int reverseInt2;
@property (retain, nonatomic) NSMutableString *reverseStr;
@property (retain, nonatomic) NSMutableString *attribute;
@property (nonatomic) unsigned int reportToLogID;

- (id)init;
- (void)report;
- (void)replaceSpecialSymbol;
- (id)toString;
- (id)description;
- (void).cxx_destruct;

@end
