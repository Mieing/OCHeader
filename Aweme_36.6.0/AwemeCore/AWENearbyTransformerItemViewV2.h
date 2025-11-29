@class AWENearbyTransformerTab, UIImageView, NSString, UILabel, UIView;
@protocol AWENearbyTransformerItemViewDelegate, AWENearbyTransformerItemViewDataSource;

@interface AWENearbyTransformerItemViewV2 : UIView <AWENearbyTransformerItemViewProtocol>

@property (retain, nonatomic) AWENearbyTransformerTab *transformer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *themeTitleLabel;
@property (retain, nonatomic) UILabel *themeSubtitleLabel;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *arrowView;
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
- (id)initWithTransformer:(id)a0 style:(long long)a1;
- (void)setThumbnailProcess:(double)a0;
- (void)setShouldShowBackground:(BOOL)a0;
- (void)updataBackgroundViewWithBackgroundImg:(id)a0;
- (void)loadLottieWithURL:(id)a0 complete:(id /* block */)a1;
- (id)currentResourceFromArray:(id)a0;
- (void)addLottie:(id)a0 inView:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
