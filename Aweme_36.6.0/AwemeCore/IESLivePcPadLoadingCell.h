@class UIImageView, UIView, UILabel, IESLiveWebpLoadingView;

@interface IESLivePcPadLoadingCell : UICollectionViewCell

@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UIView *qrView;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UIImageView *errorImg;
@property (retain, nonatomic) UILabel *errorLbl;
@property (retain, nonatomic) UILabel *qrGuideLbl;

+ (double)cellHeight;

- (void)updateTheme:(unsigned long long)a0;
- (void)updateSearchAnimStatus:(BOOL)a0;
- (void)updateQRCodeImage:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)dealloc;
- (void)setupViews;

@end
