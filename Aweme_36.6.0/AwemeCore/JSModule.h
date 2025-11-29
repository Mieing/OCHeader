@class NSString;

@interface JSModule : NSObject {
    struct weak_ptr<lynx::shell::JSProxyDarwin> { struct JSProxyDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } proxy_;
}

@property (retain, nonatomic) NSString *moduleName;

- (void)fire:(id)a0 withParams:(id)a1;
- (id)initWithModuleName:(id)a0;
- (void)setJSProxy:(const void *)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
