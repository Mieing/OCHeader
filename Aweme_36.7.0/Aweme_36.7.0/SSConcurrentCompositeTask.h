@class NSArray, NSString;

@interface SSConcurrentCompositeTask : NSObject <ACCConfigConsumer>

@property (nonatomic) BOOL didStart;
@property (copy, nonatomic) NSArray *tasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)executeWithCompletion:(id /* block */)a0;

@end
