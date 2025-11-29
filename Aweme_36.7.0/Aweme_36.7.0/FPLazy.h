@class NSObject;

@interface FPLazy : NSProxy {
    id /* block */ creator;
}

@property (retain, nonatomic) id fp_target;
@property (retain, nonatomic) NSObject *component;

+ (id)lazy:(id /* block */)a0;

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
