@class RACSignal, NSString, RACSubject;

@interface ACCAdvanceActionDispatchService : NSObject <ACCAdvanceActionDispatchProtocol>

@property (retain, nonatomic) RACSubject *actionSubject;
@property (readonly, nonatomic) RACSignal *actionSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sendAction:(id)a0;
- (void)dealloc;

@end
