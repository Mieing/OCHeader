@class NSRecursiveLock, NSString, MMLiveFlowCancelationStatus, NSMutableArray;

@interface MMLiveFlowCancelationToken : NSObject

@property (retain, nonatomic) MMLiveFlowCancelationStatus *cancelationStatus;
@property (retain, nonatomic) NSMutableArray *cancelationActionRegistrations;
@property (retain, nonatomic) NSRecursiveLock *registrationsLock;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL cancelationRequested;

- (id)initWithCancelationStatus:(id)a0;
- (id)registerCancelationAction:(id /* block */)a0 withAssociatedUserInfo:(id)a1;
- (id)registerCancelationAction:(id /* block */)a0 withAssociatedUserInfo:(id)a1 onDispatchTarget:(unsigned long long)a2;
- (id)registerLinkedCancelationSource:(id)a0;
- (void)invokeRegisteredCancelationActions;
- (void)unregisterCancelationAction:(id)a0;
- (void).cxx_destruct;

@end
