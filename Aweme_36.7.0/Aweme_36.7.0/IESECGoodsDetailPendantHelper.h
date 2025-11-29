@class NSString, IESECGoodsDetailPendantJSWorker;

@interface IESECGoodsDetailPendantHelper : NSObject <IESECGoodsDetailPendantJSMessage>

@property (retain, nonatomic) IESECGoodsDetailPendantJSWorker *jsWorker;
@property (nonatomic) BOOL jsLoaded;
@property (nonatomic) BOOL errOccured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeScriptName:(id)a0 paramsArray:(id)a1;
- (id)initWithContainerLayoutData:(id)a0;
- (void)setupJSWorkerThenInitContainerLayoutWithData:(id)a0;
- (void)initContainerLayoutWithData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
