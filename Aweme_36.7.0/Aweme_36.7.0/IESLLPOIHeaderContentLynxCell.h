@class NSString, IESLLPOILynxContainerView;

@interface IESLLPOIHeaderContentLynxCell : IESLLPOIHeaderContentBaseCell <LLCubeViewDelegate>

@property (retain, nonatomic) IESLLPOILynxContainerView *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLynxView:(id)a0 lynxUrl:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
