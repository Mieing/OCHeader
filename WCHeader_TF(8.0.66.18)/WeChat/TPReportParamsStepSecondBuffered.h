@class NSString;

@interface TPReportParamsStepSecondBuffered : TPReportParamsStep

@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long levent;
@property (nonatomic) long long reason;
@property (nonatomic) long long format;
@property (nonatomic) long long ptime;
@property (retain, nonatomic) NSString *url;

- (id)init;
- (void).cxx_destruct;

@end
