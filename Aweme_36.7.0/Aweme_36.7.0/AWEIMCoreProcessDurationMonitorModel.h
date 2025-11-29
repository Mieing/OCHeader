@class NSString, NSDictionary;

@interface AWEIMCoreProcessDurationMonitorModel : NSObject <IESIMProcessDurationMonitorModelProtocol>

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordStart;
- (void)recordEnd;
- (void)recordEndWithTime:(double)a0;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;

@end
