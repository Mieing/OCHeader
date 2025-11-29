@class NSString;

@interface IESIMFoundationService : HTSService <IESIMFoundationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentServerTime;
- (id)bundleWithName:(id)a0;
- (id)iesim_scheduledTimerWithTimeInterval:(double)a0 weakTarget:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4;

@end
