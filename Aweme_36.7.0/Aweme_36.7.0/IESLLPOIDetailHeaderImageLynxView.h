@class IESLLPOILynxContainerView, NSString, UIView, IESLLPOIDetailNGHeaderImageComponentViewModel;

@interface IESLLPOIDetailHeaderImageLynxView : IESLLPOIDetailHeaderImageComponentBaseView <LLCubeViewDelegate>

@property (retain, nonatomic) IESLLPOILynxContainerView *lynxView;
@property (nonatomic) BOOL hasInitLynxViewSize;
@property (nonatomic) double initScrollViewOffset;
@property (weak, nonatomic) IESLLPOIDetailNGHeaderImageComponentViewModel *headerImageVM;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double lastScrollEventTime;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)pageDidScroll:(struct CGPoint { double x0; double x1; })a0;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)extraParamsForLynx;
- (void)updateComponentViewAlpha:(double)a0;
- (id)buildLynxContainerViewWithCubeModel:(id)a0;
- (id)getPreloadView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
