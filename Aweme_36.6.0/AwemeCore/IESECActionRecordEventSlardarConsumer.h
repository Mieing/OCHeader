@class NSString;

@interface IESECActionRecordEventSlardarConsumer : NSObject <IESECActionRecordEventConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportEventTypes;
- (BOOL)receiveEvent:(id)a0;
- (id)name;

@end
