@class NSString;

@interface IESECActionRecordEventMapInterceptor : NSObject <IESECActionRecordEventInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interceptEvent:(id)a0;
- (id)hitCustomEventName:(id)a0;

@end
