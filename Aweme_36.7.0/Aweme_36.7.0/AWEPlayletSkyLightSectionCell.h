@class AWEPlayletSkyLightAnnieXCardView, AWEPlayletPageContext;

@interface AWEPlayletSkyLightSectionCell : UICollectionViewCell

@property (retain, nonatomic) AWEPlayletPageContext *context;
@property (retain, nonatomic) AWEPlayletSkyLightAnnieXCardView *skyLightView;

+ (id)identifier;

- (void)configWithContext:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
