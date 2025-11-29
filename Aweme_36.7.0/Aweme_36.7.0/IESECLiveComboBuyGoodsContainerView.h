@class NSArray, NSString;
@protocol IESECLiveGoodsCombinationContainerViewClickDelegate;

@interface IESECLiveComboBuyGoodsContainerView : UIStackView

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageRadius;
@property (nonatomic) unsigned long long comboBuyViewScene;
@property (retain, nonatomic) NSArray *combinationItemsArray;
@property (retain, nonatomic) NSString *tagImageURL;
@property (weak, nonatomic) id<IESECLiveGoodsCombinationContainerViewClickDelegate> delegate;

- (void)goodsImageViewClickWithIndex:(id)a0;
- (id)setupCoverImageView:(id)a0 index:(long long)a1;
- (void)addCombinationGoodsCardWithModel:(id)a0 index:(long long)a1;
- (void)setContentItemArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithScene:(unsigned long long)a0;

@end
