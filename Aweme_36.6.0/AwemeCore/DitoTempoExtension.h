@class _TtC8TempoiOS11TempoEngine, DitoPageContext, NSDictionary, NSString, NSMutableArray;
@protocol DitoExtensionContainerProtocol;

@interface DitoTempoExtension : NSObject <DitoExtensionProtocol>

@property (retain, nonatomic) _TtC8TempoiOS11TempoEngine *engine;
@property (retain, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) NSDictionary *extendData;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadPage;
- (void)didLoadPageModel:(id)a0;
- (void)didEndReload;
- (void)setupTempoWithGlobalProps:(id)a0 extendData:(id)a1 configEngineBlock:(id /* block */)a2;
- (BOOL)registerWidget:(id)a0 name:(id)a1;
- (id)rootViewByViewModel:(id)a0 preRootView:(id)a1 delegate:(id)a2;
- (void)startTaskWithPageModel:(id)a0;
- (void)endTask:(id)a0;
- (void).cxx_destruct;
- (void)didLayout;

@end
