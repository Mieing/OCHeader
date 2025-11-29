@class NSString, UIImageView, UIImage, UIView, POIMediaListPageContext;
@protocol AWEUILoadingViewProtocol;

@interface POIMediaAlbumCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UIView<AWEUILoadingViewProtocol> *loadingView;
@property (nonatomic) struct CGSize { double width; double height; } placeholderSize;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (copy, nonatomic) NSString *backgroundImageURL;
@property (weak, nonatomic) POIMediaListPageContext *context;

- (void)resetLoadingView;
- (void)configWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)showLoadingView;

@end
