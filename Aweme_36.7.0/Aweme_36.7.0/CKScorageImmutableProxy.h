@interface CKScorageImmutableProxy : NSProxy <NSMutableCopying>

@property (retain, nonatomic) id target;

+ (id)immutable:(id)a0;

- (id)immutable:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)mutableCopy;
- (void)forwardInvocation:(id)a0;

@end
