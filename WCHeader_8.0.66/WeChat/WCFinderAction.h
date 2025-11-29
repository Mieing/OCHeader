@interface WCFinderAction : NSObject

@property (nonatomic) unsigned long long hashValue;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

+ (id)new:(id)a0 action:(SEL)a1;
+ (id)new:(id)a0 action:(SEL)a1 detach:(id /* block */)a2;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)dealloc;
- (unsigned long long)calculateHash;
- (BOOL)isEqual:(id)a0;
- (void)invoke;
- (void)invoke:(id)a0;
- (void)invoke:(id)a0 arg2:(id)a1;
- (void)invoke:(id)a0 arg2:(id)a1 arg3:(id)a2;
- (void).cxx_destruct;

@end
