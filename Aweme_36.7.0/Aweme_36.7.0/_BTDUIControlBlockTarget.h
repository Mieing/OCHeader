@interface _BTDUIControlBlockTarget : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) unsigned long long events;

- (void)invoke:(id)a0;
- (id)initWithBlock:(id /* block */)a0 events:(unsigned long long)a1;
- (void).cxx_destruct;

@end
