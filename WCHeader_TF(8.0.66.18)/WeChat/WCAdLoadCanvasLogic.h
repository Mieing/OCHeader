@class NSString, NSMutableDictionary, WCCanvasDynamicDataLoader;

@interface WCAdLoadCanvasLogic : NSObject <WCCanvasDynamicDataLoaderDelegate>

@property (retain, nonatomic) WCCanvasDynamicDataLoader *dynamicDataLoader;
@property (retain, nonatomic) NSMutableDictionary *loadCompleteHandlerDic;
@property (retain, nonatomic) NSMutableDictionary *preloadResFlagDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadCanvas:(id)a0 uxInfo:(id)a1 canvasScene:(unsigned int)a2 canvasDynamicInfo:(id)a3 compatibleMode:(BOOL)a4 remoteLoadBeginBlock:(id /* block */)a5 completeHandler:(id /* block */)a6;
- (void)preloadCanvas:(id)a0 uxInfo:(id)a1 canvasScene:(unsigned int)a2 canvasDynamicInfo:(id)a3 shouldPreloadRes:(BOOL)a4;
- (void)preloadForCanvasXml:(id)a0 preloadRes:(BOOL)a1;
- (void)preloadForCanvasDSLJson:(id)a0 preloadRes:(BOOL)a1;
- (void)onCanvasServerDataReturn:(id)a0 errorCode:(int)a1 forLoadParams:(id)a2;
- (void).cxx_destruct;

@end
