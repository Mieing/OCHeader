@class RACSignal, RACSubject;

@interface RACCommand : NSObject {
    unsigned int _allowsConcurrentExecution;
}

@property (readonly, nonatomic) RACSubject *addedExecutionSignalsSubject;
@property (readonly, nonatomic) RACSubject *allowsConcurrentExecutionSubject;
@property (readonly, nonatomic) RACSignal *immediateEnabled;
@property (readonly, copy, nonatomic) id /* block */ signalBlock;
@property (readonly, nonatomic) RACSignal *executionSignals;
@property (readonly, nonatomic) RACSignal *executing;
@property (readonly, nonatomic) RACSignal *enabled;
@property (readonly, nonatomic) RACSignal *errors;
@property BOOL allowsConcurrentExecution;

- (id)initWithEnabled:(id)a0 signalBlock:(id /* block */)a1;
- (id)initWithSignalBlock:(id /* block */)a0;
- (id)execute:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
