@interface ToygerServiceUtility : NSObject

+ (id)sharedInstance;

- (BOOL)isMainQueue;
- (void)mainQueueExecute:(id /* block */)a0;
- (id)operationSerialQueue;
- (id)highFrequencySerialQueue;
- (id)init;
- (void)dealloc;

@end
