@class NSDictionary, NSString;

@interface IESECActionRecordEventTrackerConsumer : NSObject <IESECActionRecordEventConsumer>

@property (retain, nonatomic) NSDictionary *baseParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportEventTypes;
- (BOOL)hitSamplingWithEvent:(id)a0;
- (id)samplingEventList;
- (long long)defaultEventSamplingRate;
- (id)samplingMap;
- (void).cxx_destruct;
- (BOOL)receiveEvent:(id)a0;
- (id)name;
- (id)initWithParams:(id)a0;

@end
