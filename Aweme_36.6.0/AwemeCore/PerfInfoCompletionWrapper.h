@interface PerfInfoCompletionWrapper : NSObject

@property (copy, nonatomic) id /* block */ perfInfoCompletion;
@property (nonatomic) unsigned long long levelType;

- (id)initWithCompeletion:(id /* block */)a0 levelType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
