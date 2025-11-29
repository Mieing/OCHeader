@class NSString;

@interface TMAPIControlServiceImpl : NSObject <TMAPIControlService>

@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTaskWithBroker:(id)a0 andContext:(id)a1 taskType:(unsigned long long)a2;
- (id)handleTask:(id)a0;
- (void)registerTaskBroker:(id)a0;
- (void)registerSubscriber:(id)a0 onEventType:(id)a1;
- (void)unregisterSubscriber:(id)a0 onEventType:(id)a1;
- (BOOL)serviceEnabled;
- (void)setupEnabled:(BOOL)a0;

@end
