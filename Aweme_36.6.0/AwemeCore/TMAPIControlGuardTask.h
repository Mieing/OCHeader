@class NSString;
@protocol TMAPIControlTaskContext;

@interface TMAPIControlGuardTask : NSObject <TMAPIControlTaskPrivateProtocol>

@property (copy, nonatomic) NSString *taskIdentity;
@property (retain, nonatomic) id<TMAPIControlTaskContext> taskContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentity:(id)a0 context:(id)a1;
- (id)guardErrorWithReason:(id)a0;
- (void).cxx_destruct;
- (id)execute;
- (id)identity;
- (id)context;

@end
