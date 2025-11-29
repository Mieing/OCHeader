@interface JceStructContainer : NSObject

@property (copy, nonatomic) id /* block */ allocator;
@property (copy, nonatomic) id /* block */ deallocator;
@property (readonly, nonatomic) void *p;

- (id)initWithAllocator:(id /* block */)a0 andDeallocator:(id /* block */)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
