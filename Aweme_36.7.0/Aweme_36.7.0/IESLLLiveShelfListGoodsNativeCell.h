@class UIView, IESLLLiveShelfNativeCellIndustryPreview, IESLLLiveShelfListGoodsCellModel, IESLLLiveShelfNativeCellAddressView, UIImageView, IESLLLiveShelfNativeSellingView, IESLLLiveShelfNativeCellIconView, IESLLLiveShelfNativeMarketingView, IESLLLiveShelfListGoodsModel, UILabel;

@interface IESLLLiveShelfListGoodsNativeCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backgroundContainerView;
@property (retain, nonatomic) UIView *brandContainerView;
@property (retain, nonatomic) UIView *cardContainerView;
@property (retain, nonatomic) UILabel *brandNameView;
@property (retain, nonatomic) UIImageView *brandIconView;
@property (retain, nonatomic) UILabel *brandSubNameView;
@property (retain, nonatomic) UIView *verticalLine;
@property (retain, nonatomic) UIView *leftContentView;
@property (retain, nonatomic) UIView *rightContentView;
@property (retain, nonatomic) UIView *previewContainerView;
@property (retain, nonatomic) UILabel *poiTitleLabel;
@property (retain, nonatomic) IESLLLiveShelfNativeMarketingView *marketingView;
@property (retain, nonatomic) IESLLLiveShelfNativeCellAddressView *poiAddressView;
@property (retain, nonatomic) IESLLLiveShelfNativeSellingView *sellingView;
@property (retain, nonatomic) UILabel *soldCountLabel2;
@property (retain, nonatomic) IESLLLiveShelfNativeCellIconView *iconView;
@property (retain, nonatomic) IESLLLiveShelfNativeCellIndustryPreview *industryPreview;
@property (retain, nonatomic) IESLLLiveShelfListGoodsModel *model;
@property (retain, nonatomic) IESLLLiveShelfListGoodsCellModel *cellModel;
@property (copy, nonatomic) id /* block */ cardClickedWithItemBlock;
@property (copy, nonatomic) id /* block */ actionBtnClickedBlock;
@property (copy, nonatomic) id /* block */ industryPreviewClickedBlock;
@property (copy, nonatomic) id /* block */ lotteryViewClickedBlock;
@property (copy, nonatomic) id /* block */ imageTrackBlock;

- (void)configWithModel:(id)a0;
- (void)clickCardBackground;
- (void)_updateViewConstraint;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
