@class NSString;
@protocol TMAPIControlTaskContext, TMAPIControlTaskResult;

@interface TMAPIControlRuleEvent : NSObject <TMAPIControlEvent>

@property (retain, nonatomic) NSString *taskRuleStatus;
@property (retain, nonatomic) id<TMAPIControlTaskContext> context;
@property (retain, nonatomic) id<TMAPIControlTaskResult> result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)eventType;

@end
