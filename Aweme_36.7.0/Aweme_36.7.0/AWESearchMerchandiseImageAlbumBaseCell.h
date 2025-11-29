@class NSString, UIImageView, AWESearchMerchandiseGoodsInfoView, UIView;
@protocol AWESearchImageSetViewProtocol;

@interface AWESearchMerchandiseImageAlbumBaseCell : AWESearchOptimizeGoodsCell

@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UIView<AWESearchImageSetViewProtocol> *imageAlbumView;
@property (retain, nonatomic) AWESearchMerchandiseGoodsInfoView *infoView;
@property (copy, nonatomic) NSString *referString;

+ (id)identifier;

- (double)currPlaybackTime;
- (void)configWithModel:(id)a0;
- (void)setCurrPlaybackTime:(double)a0;
- (void)setActionRecord:(id)a0;
- (void)setupTagView;
- (void)imageAlbumInit;
- (void)imageAlbumStopAndFree;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didResignActive;
- (void)layoutSubviews;
- (id)activeView;

@end
