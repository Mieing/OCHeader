@interface TSDeallocAssociate : NSObject

@property (copy, nonatomic) id /* block */ deallocBlock;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)dealloc;

@end
