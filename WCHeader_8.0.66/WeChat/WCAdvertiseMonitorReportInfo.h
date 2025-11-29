@class NSString;

@interface WCAdvertiseMonitorReportInfo : NSObject

@property (retain, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSString *actionValue;
@property (nonatomic) int subType;
@property (nonatomic) int subValue;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) int source;

+ (id)genMonitorReportInfo:(id)a0 actionValue:(id)a1 subType:(int)a2 subValue:(int)a3 extInfo:(id)a4;

- (id)toReportString;
- (void).cxx_destruct;

@end
