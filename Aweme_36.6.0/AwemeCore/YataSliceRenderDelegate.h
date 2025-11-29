@class NSString, NSMutableSet, YataRenderDispatcher;
@protocol IESECSliceXInstanceInterface;

@interface YataSliceRenderDelegate : NSObject <IESECSliceXEventForwardDelegate, YataABSRenderDelegate>

@property (readonly, nonatomic) id<IESECSliceXInstanceInterface> sliceXInstance;
@property (nonatomic) double onePixelLimit;
@property (retain, nonatomic) NSMutableSet *recordSliceViewErrorSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) YataRenderDispatcher *renderDispatcher;

- (void)triggerSliceXEvent:(id)a0;
- (void)updateRenderView:(id)a0 viewLoadType:(unsigned long long)a1 scene:(id)a2 data:(id)a3 fitSize:(struct CGSize { double x0; double x1; })a4 completion:(id /* block */)a5;
- (void)preloadRenderView:(id)a0 completion:(id /* block */)a1;
- (id)createRenderView:(id)a0 scene:(id)a1 viewLoadType:(unsigned long long *)a2 completion:(id /* block */)a3;
- (BOOL)isViewCreatedFailed:(id)a0;
- (id)syncCreateRenderView:(id)a0 scene:(id)a1 error:(id *)a2;
- (void)reportSliceViewError:(id)a0 detail:(id)a1 errorCode:(unsigned long long)a2 renderNode:(id)a3;
- (id)asyncCreateRenderView:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })syncUpdateRenderView:(id)a0 scene:(id)a1 data:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3;
- (void)asyncUpdateRenderView:(id)a0 scene:(id)a1 data:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3 completion:(id /* block */)a4;
- (id)prepareBindDataWithRenderNode:(id)a0 monitorExtraParams:(id)a1;
- (id)yataErrorExtraForRenderNode:(id)a0 error:(id)a1;
- (BOOL)isViewSyncBindable:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
