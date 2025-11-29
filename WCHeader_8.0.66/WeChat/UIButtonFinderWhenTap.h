@interface UIButtonFinderWhenTap : NSObject

@property (nonatomic) unsigned long long hashValue;
@property (copy, nonatomic) id /* block */ action;

- (void)onTap:(id)a0;
- (void)replaceBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
