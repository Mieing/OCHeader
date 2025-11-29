@class UIView, IESECGalleryBar, NSString, UIImageView, IESECGoodsFeedGradientView, IESECContentCarouselView, IESECTrendCardWrapperModel, UILabel;
@protocol IESECTrendGoodsSetCardDelegate;

@interface IESECTrendGoodsSetCell : UICollectionViewCell <IESECContentCarouselViewDelegate, IESECTrendGoodsCardProtocol> {
    IESECTrendCardWrapperModel *_trendModel;
}

@property (retain, nonatomic) IESECContentCarouselView *carouselView;
@property (retain, nonatomic) UIView *coverTitleContainer;
@property (retain, nonatomic) UILabel *coverTitle;
@property (retain, nonatomic) IESECGalleryBar *galleryBar;
@property (retain, nonatomic) UIView *pageControlContainer;
@property (retain, nonatomic) IESECGoodsFeedGradientView *trendContainer;
@property (retain, nonatomic) UIImageView *containerView;
@property (retain, nonatomic) UIImageView *trendIcon;
@property (retain, nonatomic) UILabel *trendTitle;
@property (retain, nonatomic) UILabel *trendDescription;
@property (retain, nonatomic) IESECGoodsFeedGradientView *trendEntrance;
@property (retain, nonatomic) UILabel *trendEntranceLabel;
@property (weak, nonatomic) id<IESECTrendGoodsSetCardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeightWithModel:(id)a0 containerWidth:(double)a1 params:(id)a2;

- (void)carouselView:(id)a0 didClickContentAt:(long long)a1;
- (void)carouselView:(id)a0 didScrollToIndex:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (void)tapGestureHandler:(id)a0;

@end
