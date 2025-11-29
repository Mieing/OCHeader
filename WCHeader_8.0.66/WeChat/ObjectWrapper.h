@interface ObjectWrapper : NSObject {
    id m_target;
}

- (id)initWithTarget:(id)a0;
- (id)returnNil;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;

@end
