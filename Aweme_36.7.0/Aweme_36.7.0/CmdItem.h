@class NSString;

@interface CmdItem : NSObject

@property (nonatomic) int version;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) int cxmd;
@property (nonatomic) int reportFreq;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) int maxReportCnt;
@property (nonatomic) int reportCnt;
@property (nonatomic) long long lastTriggerTime;

- (id)initWithParams:(int)a0 uuid:(id)a1 cxmd:(int)a2 reportFreq:(int)a3 scene:(id)a4 maxReportCnt:(int)a5 reportCnt:(int)a6 lastTriggerTime:(long long)a7;
- (void).cxx_destruct;

@end
