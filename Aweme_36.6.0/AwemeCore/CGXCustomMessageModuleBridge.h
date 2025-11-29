@class NSString;
@protocol CGXCustomMessageDelegate;

@interface CGXCustomMessageModuleBridge : NSObject <CGXModuleProtocol> {
    void *nativeModule_;
    struct CGXCustomMessageListener { void /* function */ **x0; id x1; } *listener;
}

@property (weak, nonatomic) id<CGXCustomMessageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessage:(id)a0;
- (void)onBinaryMessage:(id)a0;
- (void)sendBinaryMessage:(id)a0;
- (void)initModule:(void *)a0;
- (void)uninitModule;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;

@end
