@class NSString;
@protocol CGXStreamParameterDelegate;

@interface CGXStreamParameterModuleBridge : NSObject <CGXModuleProtocol> {
    void *nativeModule_;
    struct CGXStreamParameterListener { void /* function */ **x0; id x1; } *listener;
}

@property (weak, nonatomic) id<CGXStreamParameterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initModule:(void *)a0;
- (void)uninitModule;
- (void)setStreamParameter:(id)a0;
- (void)onStreamChangedWithResult:(long long)a0 params:(id)a1;
- (void).cxx_destruct;

@end
