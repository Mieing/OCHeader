@class WCFinderCarouselView, UILabel, MMUIButton, UIView;
@protocol WCFinderCarouselDatasource, WCFinderMusicVideoContentViewDelegate, WCFinderCarouseDelegate;

@interface WCFinderMusicVideoContentView : UICollectionViewCell

@property (retain, nonatomic) UIView *topContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *allBtn;
@property (retain, nonatomic) WCFinderCarouselView *carouselView;
@property (weak, nonatomic) id<WCFinderMusicVideoContentViewDelegate> delegate;
@property (weak, nonatomic) id<WCFinderCarouseDelegate> carouselDelegate;
@property (weak, nonatomic) id<WCFinderCarouselDatasource> carouselDataSource;
@property (nonatomic) BOOL hiddenTopTitle;

+ (double)musicVideoContentViewHeightFromWidth:(double)a0;
+ (double)musicTabContentViewHeightFromWidth:(double)a0;
+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)showMoreBtn:(BOOL)a0;
- (id)createFlowLayout;
- (void)onClickAllBtn;
- (void)refreshView;
- (void).cxx_destruct;

@end
