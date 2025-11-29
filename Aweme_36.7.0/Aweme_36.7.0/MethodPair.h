@class MethodHookInfo;

@interface MethodPair : NSObject {
    MethodHookInfo *_beginMethod;
    MethodHookInfo *_endMethod;
}

- (id)initWithBegin:(id)a0 End:(id)a1;
- (void).cxx_destruct;

@end
