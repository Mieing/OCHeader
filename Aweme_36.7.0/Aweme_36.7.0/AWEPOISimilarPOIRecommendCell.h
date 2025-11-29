@class AWEModernPOIDetailCollectButton, UIImageView, UILabel, AWEPOIDetailResponse, YYLabel;

@interface AWEPOISimilarPOIRecommendCell : UICollectionViewCell

@property (nonatomic) BOOL hasDoneInitialization;
@property (weak, nonatomic) AWEPOIDetailResponse *poiDetail;
@property (nonatomic) double contentPadding;
@property (retain, nonatomic) UIImageView *poiHeaderImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *collectCountLabel;
@property (retain, nonatomic) YYLabel *rankLabel;
@property (retain, nonatomic) AWEModernPOIDetailCollectButton *collectButton;
@property (copy, nonatomic) id /* block */ contentTapBlock;
@property (copy, nonatomic) id /* block */ btnTapBlock;

- (void)updateCollectStatus:(BOOL)a0;
- (void)handleCollect;
- (void)configWithModel:(id)a0 scene:(unsigned long long)a1 poiDetail:(id)a2 contentTapBlock:(id /* block */)a3 btnTapBlock:(id /* block */)a4;
- (void)setupViewIfNeed;
- (void)p_createCollectButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapAction;

@end
