@interface AWEStudioPromise : NSObject

@property (copy, nonatomic) id /* block */ promise;
@property (readonly, nonatomic) id /* block */ pthen;
@property (readonly, nonatomic) id /* block */ pexec;

+ (id /* block */)promise:(id /* block */)a0 retry:(unsigned long long)a1;
+ (id /* block */)promise:(id /* block */)a0 retryWith:(id /* block */)a1;

- (id)retry:(unsigned long long)a0;
- (id)retryWith:(id /* block */)a0;
- (void)execute:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)then:(id /* block */)a0;
- (id)initWithPromise:(id /* block */)a0;

@end
