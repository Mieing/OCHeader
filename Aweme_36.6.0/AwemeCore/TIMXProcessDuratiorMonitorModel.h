@class NSString, NSDictionary, NSNumber;

@interface TIMXProcessDuratiorMonitorModel : NSObject <IESIMProcessDurationMonitorModelProtocol>

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSNumber *totalDuration;

- (void)recordStart;
- (void)recordEnd;
- (double)calculateElaspedTime;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;

@end
