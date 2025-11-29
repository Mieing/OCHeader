@class LynxContext, NSString, LynxGroup;
@protocol LynxKryptonHelper;

@interface LynxKryptonModule : NSObject <LynxExtensionModule> {
    struct unique_ptr<lynx::pub::LynxExtensionDelegate, std::default_delete<lynx::pub::LynxExtensionDelegate>> { struct LynxExtensionDelegate *__ptr_; } extension_delegate_;
}

@property (retain, nonatomic) id<LynxKryptonHelper> kryptonHelper;
@property (weak, nonatomic) LynxContext *lynxContext;
@property (weak, nonatomic) LynxGroup *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)name;

- (id)initWithLynxContext:(id)a0 group:(id)a1;
- (void *)getExtensionDelegate;
- (id)getKryptonHelper;
- (void)setUp;
- (void).cxx_destruct;
- (void)destroy;
- (id).cxx_construct;

@end
