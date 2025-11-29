@class NSString, BDECRabbiFlySliceXDiff, BDECRabbiFlyDynamicSupervisor;
@protocol BDECRabbiFlyISliceXDelegate, IESECSliceXInstanceInterface;

@interface BDECRabbiFlySliceX : NSObject <IESECSliceXEventForwardDelegate, SLICallbackInterface, BDECRabbiFlyISliceX>

@property (copy, nonatomic) NSString *biz;
@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) BDECRabbiFlySliceXDiff *sliceXDiff;
@property (retain, nonatomic) id<IESECSliceXInstanceInterface> sliceXInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDECRabbiFlyISliceXDelegate> delegate;

- (void)triggerSliceXEvent:(id)a0;
- (id)createSliceXView:(id)a0 completion:(id /* block */)a1;
- (id)getGlobalProps;
- (void)preCreateViews;
- (void)onSlicePerfReportWithEventName:(id)a0 params:(id)a1;
- (id)initWithBiz:(id)a0 supervisor:(id)a1;
- (id)createConfig:(id)a0;
- (id)getCustomGlobalProps;
- (void)preloadSliceXTemplates:(id)a0;
- (id)createSliceXView:(id)a0 error:(id *)a1;
- (void)bindSliceXView:(id)a0 renderData:(id)a1 token:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3 completion:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })bindSliceXView:(id)a0 renderData:(id)a1 token:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3 error:(id *)a4;
- (void).cxx_destruct;
- (void)preload;

@end
