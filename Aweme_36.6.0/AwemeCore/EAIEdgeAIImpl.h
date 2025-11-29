@class EAIBuiltinDatasource, NSString, EAIDatabase, EAIApplogDatasource, NSMutableDictionary, EAIModelDownloader, NSMutableArray;
@protocol EAINetworkInterface, EAIRegistry;

@interface EAIEdgeAIImpl : NSObject <EAIEdgeAIInterface>

@property (retain, nonatomic) EAIModelDownloader *downloader;
@property (retain, nonatomic) id<EAINetworkInterface> network;
@property (retain, nonatomic) EAIDatabase *database;
@property (copy, nonatomic) NSString *fileDir;
@property (retain, nonatomic) EAIBuiltinDatasource *builtinDatasource;
@property (retain, nonatomic) EAIApplogDatasource *applogDatasource;
@property (retain, nonatomic) NSMutableDictionary *triggerEvents;
@property (retain, nonatomic) NSMutableArray *datasources;
@property (retain, nonatomic) id<EAIRegistry> registry;
@property (retain, nonatomic) NSMutableDictionary *results;
@property (retain, nonatomic) NSMutableDictionary *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEvent:(id)a0 params:(id)a1;
- (void)doInit:(id)a0 network:(id)a1 workQueue:(id)a2;
- (void)requestModelInfo:(id)a0 modelInfo:(id)a1;
- (id)fillInputs:(id)a0 schema:(id)a1 cloudInfoList:(id)a2;
- (id)inference:(id)a0 relativePath:(id)a1 output:(id)a2;
- (void)downloadModel:(id)a0 modelInfo:(id)a1;
- (id)multiTensorInference:(struct EdgeAiEngine { struct shared_ptr<EDGEAI::EdgeAiEngine::Impl> { struct Impl *x0; struct __shared_weak_count *x1; } x0; } *)a0 input:(id)a1 data:(id)a2 result:(id)a3;
- (id)singleTensorInference:(struct EdgeAiEngine { struct shared_ptr<EDGEAI::EdgeAiEngine::Impl> { struct Impl *x0; struct __shared_weak_count *x1; } x0; } *)a0 input:(id)a1 data:(id)a2 result:(id)a3;
- (void)run:(id)a0 callback:(id /* block */)a1;
- (void)addDatasource:(id)a0;
- (void)removeDatasource:(id)a0;
- (void)query:(id)a0 callback:(id /* block */)a1;
- (void)unsubscribe:(id)a0 callback:(id /* block */)a1;
- (id)initWithRegistry:(id)a0 network:(id)a1 workQueue:(id)a2;
- (void).cxx_destruct;
- (void)subscribe:(id)a0 callback:(id /* block */)a1;
- (void)dealloc;

@end
