@class NSString, NSDictionary, NSNumber;

@interface ArgusReportConfig : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL needReport;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSDictionary *monitorCommonParams;
@property (copy, nonatomic) NSDictionary *commonCategory;
@property (nonatomic) long long platform;
@property (copy, nonatomic) NSString *teaEventName;
@property (nonatomic) BOOL rewriteSampleLevel;
@property (nonatomic) unsigned long long sampleLevel;
@property (copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSNumber *metric;
@property (copy, nonatomic) NSDictionary *reportExtra;
@property (copy, nonatomic) NSDictionary *alogExtra;

- (void)recordStart;
- (void)recordEnd;
- (void)rewriteSampleLevel:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
