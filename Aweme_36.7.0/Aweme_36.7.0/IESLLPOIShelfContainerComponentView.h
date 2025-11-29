@class NSString, NSMapTable, IESLLPOIShelfContainerComponentViewModel;

@interface IESLLPOIShelfContainerComponentView : LLDitoComponentView <IESLLPOIShelfModuleViewDelegate>

@property (retain, nonatomic) NSMapTable *moduleViewMap;
@property (copy, nonatomic) NSString *sessionID;
@property (weak, nonatomic) IESLLPOIShelfContainerComponentViewModel *shelfNaContainerComponentViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadUIWithViewModel:(id)a0;
- (void)cleanModuleView;
- (void)poiShelfModuleView:(id)a0 heightChange:(double)a1;
- (void)reloadShelfContainerWithData:(id)a0;
- (id)findViewByID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
