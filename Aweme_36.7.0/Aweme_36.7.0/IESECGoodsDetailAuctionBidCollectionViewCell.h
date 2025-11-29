@class UIStackView, IESECGoodsDetailAuctionBidMetaModel, IESECGoodsDetailAuctionBidModel, IESECLongContentLabelView;

@interface IESECGoodsDetailAuctionBidCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) IESECLongContentLabelView *headerView;
@property (retain, nonatomic) IESECGoodsDetailAuctionBidModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailAuctionBidMetaModel *metaModel;
@property (nonatomic) double margin;
@property (nonatomic) double padding;

- (void)openAuctionHistory:(id)a0;
- (void)updateStackViewContainerWithArray:(id)a0;
- (void)updateStackViewWithArray:(id)a0;
- (void)addArrangedSubviewToStackViewContainer:(id)a0;
- (void)setSeparateLineHidden:(BOOL)a0 OfSubview:(id)a1;
- (void)updateWithAuctionBidModel:(id)a0 metaModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
