@class ACCVideoQualityBaseSource, NSString, NSHashTable, AWEVideoPublishViewModel;
@protocol ACCVideoQualitySaverProtocol, ACCVideoSourceWriterProtocol, ACCVideoQualityLifeCycleObserverProtocol, ACCVideoSourceRendererProtocol, ACCVideoQualityCompilerProtocol;

@interface ACCVideoQualityLifeCycleImpl : NSObject <ACCVideoQualityLifeCycleProtocol>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<ACCVideoQualityLifeCycleObserverProtocol> multicastDelegate;
@property (weak, nonatomic) AWEVideoPublishViewModel *context;
@property (retain, nonatomic) id<ACCVideoSourceWriterProtocol> writer;
@property (retain, nonatomic) id<ACCVideoSourceRendererProtocol> renderer;
@property (retain, nonatomic) id<ACCVideoQualityCompilerProtocol> compiler;
@property (retain, nonatomic) id<ACCVideoQualitySaverProtocol> saver;
@property (weak, nonatomic) ACCVideoQualityBaseSource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFinishSource;
- (void)onPrepareRender:(id)a0 completion:(id /* block */)a1;
- (void)onPrepareSourceOnWriter:(id)a0 completion:(id /* block */)a1;
- (void)onFinishRender;
- (void)onPrepareCompile:(id)a0 completion:(id /* block */)a1;
- (void)onFinishCompileWithError:(id)a0;
- (void)onPrepareSave:(id)a0 completion:(id /* block */)a1;
- (void)onFinishSave;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
