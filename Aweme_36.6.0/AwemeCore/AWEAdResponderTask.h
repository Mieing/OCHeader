@interface AWEAdResponderTask : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ handler;

+ (id)taskWithType:(unsigned long long)a0 handler:(id /* block */)a1;
+ (id)taskWithType:(unsigned long long)a0;

- (void).cxx_destruct;

@end
