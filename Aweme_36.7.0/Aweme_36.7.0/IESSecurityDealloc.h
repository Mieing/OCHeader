@interface IESSecurityDealloc : NSObject

@property (copy, nonatomic) id /* block */ deallocAction;

- (id)initWithDeallocAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
