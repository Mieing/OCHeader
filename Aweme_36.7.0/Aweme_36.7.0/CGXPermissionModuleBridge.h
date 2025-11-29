@class NSString;
@protocol CGXPermissionModuleDelegate;

@interface CGXPermissionModuleBridge : NSObject <CGXModuleProtocol> {
    void *nativeModule_;
    struct CGXPermissionDelegate { void /* function */ **x0; id x1; } *nativeDelegate;
}

@property (weak, nonatomic) id<CGXPermissionModuleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initModule:(void *)a0;
- (void)uninitModule;
- (void).cxx_destruct;

@end
