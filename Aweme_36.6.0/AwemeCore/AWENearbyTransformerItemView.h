@class AWENearbyTransformerTab, UIImageView, NSString, UILabel, CALayer;
@protocol AWENearbyTransformerItemViewDelegate, AWENearbyTransformerItemViewDataSource;

@interface AWENearbyTransformerItemView : UIView <AWENearbyTransformerItemViewProtocol> {
    double _thumbnailProcess;
}

@property (retain, nonatomic) AWENearbyTransformerTab *transformer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *themeTitleLabel;
@property (retain, nonatomic) UILabel *themeSubtitleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) CALayer *gradientLayer;
@property (weak, nonatomic) id<AWENearbyTransformerItemViewDataSource> dataSource;
@property (weak, nonatomic) id<AWENearbyTransformerItemViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clicked:(id)a0;
- (void)setInFeed:(BOOL)a0;
- (void)updateWithTransformer:(id)a0;
- (void)updateIconViewWithIcons:(id)a0;
- (void)updateGradientLayerWithbackground:(id)a0;
- (void)configIconViewWithURL:(id)a0;
- (id)gradientLayerWithString:(id)a0;
- (id)initWithTransformer:(id)a0 style:(long long)a1;
- (void)setThumbnailProcess:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;

@end
