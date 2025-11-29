@class NSString;

@interface HTSWeakProxy : NSProxy

@property (weak, nonatomic) id target;
@property (retain, nonatomic) NSString *targetClassName;

+ (id)initWithTarget:(id)a0;

- (void)handleNilTarget:(id)a0;
- (void)handleNoSelector:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
