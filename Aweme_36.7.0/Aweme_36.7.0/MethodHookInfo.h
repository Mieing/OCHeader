@class NSString;

@interface MethodHookInfo : NSObject {
    BOOL _hooked;
    unsigned int _tid;
    long long _execTime;
    NSString *_flag;
    NSString *_cls;
    NSString *_sel;
}

- (id)initWithFlag:(id)a0 Cls:(id)a1 Sel:(id)a2;
- (void).cxx_destruct;

@end
