@class AWELiveShelfCellPriceView, AWELiveShelfListGoodsModel, UILabel, NSDictionary, AWELiveShelfCellAddressView, UIButton, UIView, AWELiveShelfCellIconView, UIStackView, AWEPageContext, AWELiveShelfCellViewModel, AWELiveShelfCellSeckillView, UIImageView;

@interface AWELiveShelfListGoodsCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backgroundContainerView;
@property (retain, nonatomic) AWELiveShelfCellIconView *iconView;
@property (retain, nonatomic) UILabel *poiTitleLabel;
@property (retain, nonatomic) AWELiveShelfCellAddressView *poiAddressView;
@property (retain, nonatomic) UILabel *deliveryLabel;
@property (retain, nonatomic) UIStackView *couponContainerView;
@property (retain, nonatomic) AWELiveShelfCellSeckillView *seckillView;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) AWELiveShelfCellPriceView *priceView;
@property (retain, nonatomic) UIButton *actionBtn;
@property (retain, nonatomic) AWELiveShelfCellViewModel *viewModel;
@property (nonatomic) BOOL hasConfigCell;
@property (retain, nonatomic) UIView *poiInfoView;
@property (retain, nonatomic) UIImageView *poiInfoIcon;
@property (retain, nonatomic) UILabel *poiInfoLabel;
@property (nonatomic) BOOL isDull;
@property (retain, nonatomic) UILabel *salePointLabel;
@property (copy, nonatomic) NSDictionary *containerInfo;
@property (retain, nonatomic) AWELiveShelfListGoodsModel *model;
@property (copy, nonatomic) id /* block */ cardClickedWithItemBlock;
@property (copy, nonatomic) id /* block */ actionBtnClickedBlock;
@property (copy, nonatomic) id /* block */ actionBtnClickedOnlyLogBlock;
@property (copy, nonatomic) id /* block */ imageTrackBlock;
@property (copy, nonatomic) id /* block */ cardHeightChangeBlock;
@property (nonatomic) long long currentCardType;
@property (retain, nonatomic) AWEPageContext *context;

- (void)actionBtnClicked:(id)a0;
- (void)configWithModel:(id)a0;
- (void)setupContext:(id)a0;
- (BOOL)isInSeckillStatus;
- (void)clickCardBackground;
- (void)_updateBackgroundColorWithIsPink:(BOOL)a0;
- (void)_updateViewConstraintAsSingleShop;
- (void)_configSeckillViewWithModel:(id)a0 isWarmUp:(BOOL)a1;
- (id)_configRightListViewWithModel:(id)a0;
- (void)_addRightViewsInCouponContainer:(id)a0;
- (void)_updateViewConstraintAsMultipleShop;
- (void)updateActionBtnBackgroundColor;
- (id)createCouponViewWithTitle:(id)a0 content:(id)a1;
- (id)createRightViewWithContent:(id)a0;
- (void)_resetCouponContainerView;
- (BOOL)isShowPoiInfo;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
