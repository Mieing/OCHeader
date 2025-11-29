@interface YataSubscription : NSObject

@property (copy, nonatomic) id /* block */ observer;

- (id)skipRepeats:(id /* block */)a0;
- (void)updateValues:(id)a0 with:(id)a1;
- (id)only:(id /* block */)a0;
- (void).cxx_destruct;
- (id)select:(id /* block */)a0;
- (id)initWithSink:(id /* block */)a0;
- (id)skip:(id /* block */)a0;

@end
