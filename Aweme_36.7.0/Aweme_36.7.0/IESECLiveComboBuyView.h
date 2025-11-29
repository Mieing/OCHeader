@class IESECLiveGoodsCombinationModel, NSString, UIImageView, UILabel, IESECLivePriceLabel, IESECLiveComboBuyGoodsContainerView;
@protocol IESECLiveComboBuyViewDelegate, IESECLiveComboBuyViewDataSource;

@interface IESECLiveComboBuyView : UIView <IESECLiveGoodsCombinationContainerViewClickDelegate>

@property (nonatomic) unsigned long long comboBuyViewScene;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIImageView *comboBuyTagView;
@property (retain, nonatomic) IESECLiveComboBuyGoodsContainerView *containerView;
@property (retain, nonatomic) UILabel *benefitLabel;
@property (retain, nonatomic) UIImageView *comboDetailArrowImageView;
@property (retain, nonatomic) IESECLivePriceLabel *comboPriceLabel;
@property (retain, nonatomic) IESECLivePriceLabel *originPriceLabel;
@property (nonatomic) unsigned long long cellBottomType;
@property (weak, nonatomic) id<IESECLiveComboBuyViewDelegate> delegate;
@property (weak, nonatomic) id<IESECLiveComboBuyViewDataSource> dataSource;
@property (retain, nonatomic) IESECLiveGoodsCombinationModel *combinationModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickAction;
- (void)setupCommonUI;
- (void)didClickContainerView:(id)a0 extraInfo:(id)a1;
- (void)setConfigWithScene:(unsigned long long)a0;
- (BOOL)isInstantStore;
- (void)setupViewForListAudience;
- (void)setupViewForListAnchor;
- (void)setupViewForCard;
- (void)setupComboBuyCommonViewForList;
- (void)updateBgCornerRadius:(double)a0;
- (void)setCombinationModel:(id)a0 withType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithScene:(unsigned long long)a0;
- (void)setContentData:(id)a0;

@end
