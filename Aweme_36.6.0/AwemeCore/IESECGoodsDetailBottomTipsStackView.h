@class IESECLLDCLynxManager, NSString, IESECGoodsDetailBottomDataModel, UIView, NSMutableArray, IESECGoodsDetailBottomMetaModel;

@interface IESECGoodsDetailBottomTipsStackView : UIStackView <IESECGoodsDetailContainerBottomTipsViewProtocol>

@property (retain, nonatomic) IESECGoodsDetailBottomDataModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailBottomMetaModel *metaModel;
@property (retain, nonatomic) NSMutableArray *tipsModels;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (weak, nonatomic) UIView *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesec_respondEvent:(id)a0;
- (double)tipsHeight;
- (void)registerJSB;
- (void)updateContentWithViewModel:(id)a0 lynxManager:(id)a1;
- (unsigned long long)tipsCount;
- (void)updateLynxFontScale:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 lynxManager:(id)a2;
- (void).cxx_destruct;
- (void)removeAllViews;
- (void)updateContent;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
