@class NSString;

@interface TMAPIControlRuleEventReporter : NSObject <TMAPIControlEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleResultEvent:(id)a0;
- (void)handleEvent:(id)a0;

@end
