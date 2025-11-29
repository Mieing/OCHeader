@class AnnieLatchData, NSArray;

@interface BDXLynxOnlyContext : BDXSubContext

@property (retain, nonatomic) AnnieLatchData *latchData;
@property (nonatomic) BOOL enableRenderMultiThreads;
@property (nonatomic) BOOL enablePendingJsTask;
@property (retain, nonatomic) id templateBundle;
@property (copy, nonatomic) id /* block */ lynxViewDidInit;
@property (nonatomic) BOOL enableMarkReadOnly;
@property (retain, nonatomic) NSArray *extraJSPaths;
@property (nonatomic) BOOL enablePreserveDataForProcessRender;
@property (copy, nonatomic) id /* block */ beforeCreateLynxView;

- (void)mergeContext:(id)a0 shouldOverride:(BOOL)a1;
- (void).cxx_destruct;

@end
