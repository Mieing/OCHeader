@class NSString, KryptonApp, LynxKryptonDefaultServiceLazyLoader;

@interface LynxCanvasManagerImpl : NSObject <LynxCanvasManager> {
    KryptonApp *_app;
    LynxKryptonDefaultServiceLazyLoader *_defaultServiceLazyLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerService:(id)a0 withImpl:(id)a1;
- (void)setTaskRunner:(void *)a0;
- (void)onAppEnterBackground;
- (id)initWithLynxContext:(id)a0;
- (void)setRenderFrameCallback:(id /* block */)a0;
- (void)onRuntimeCreate:(void *)a0;
- (void)onRuntimeInit:(long long)a0;
- (void)onAppEnterForeground;
- (void)onRuntimeAttach:(void *)a0;
- (void)onRuntimeDetach;
- (void)onRuntimeMediatorDestroy;
- (id)getApp;
- (BOOL)isEventReportEnabled;
- (BOOL)isUseAurumAudioEngine;
- (BOOL)isAudioForceUseAdaptiveSampler;
- (void)registerKryptonLog;
- (void)registerAudioModuleForSystemInvoker;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (void)setTemporaryDirectory:(id)a0;

@end
