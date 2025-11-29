@class IESECGoodsDetailProcessFlowView, IESECGoodsDetailProcessFlowMetaModel, IESECLongContentLabelView, IESECGoodsDetailProcessFlowDataModel;

@interface IESECGoodsDetailProcessFlowCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IESECLongContentLabelView *titleLabel;
@property (retain, nonatomic) IESECGoodsDetailProcessFlowView *processFlowView;
@property (retain, nonatomic) IESECGoodsDetailProcessFlowDataModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailProcessFlowMetaModel *metaModel;

- (void)handleProcessFlowTitle;
- (void)configureCellWithModel:(id)a0 metaModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
