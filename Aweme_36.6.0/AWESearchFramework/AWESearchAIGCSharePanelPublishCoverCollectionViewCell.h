@class UIImageView, LOTAnimationView, NSString;

@interface AWESearchAIGCSharePanelPublishCoverCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) LOTAnimationView *loadingView;
@property (copy, nonatomic) NSString *loadingUrl;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL error;

- (void)themeChange;
- (id)errorImage;
- (void)updateCoverUrl:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)showLoading;

@end
