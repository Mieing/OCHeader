@class AWEIMCycleBannerView;

@interface AWEIMFansGroupOperationBannerCell : UICollectionViewCell

@property (retain, nonatomic) AWEIMCycleBannerView *bannerView;

+ (double)cellHeight;

- (void)configCellWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willDisappear;
- (void)setupSubviews;
- (void)willAppear;

@end
