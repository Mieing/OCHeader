@class MMFinderLiveBannerCellViewModel, NSString, UIImageView, MMFinderLiveBannerInfo, UILabel, MMWebImageView, UIButton;

@interface WCFinderLiveBannerBaseCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) MMWebImageView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) MMFinderLiveBannerCellViewModel *bannerVM;
@property (copy, nonatomic) id /* block */ viewEventAction;
@property (nonatomic) BOOL isScrollAnimating;
@property (readonly, nonatomic) MMFinderLiveBannerInfo *bannerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)titleWidthByInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })bannerSizeByInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })viewSizeByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUIIfNeeded;
- (void)onButtonLongPress;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)startScrollAnimation:(BOOL)a0;
- (void)stopScrollAnimation;
- (BOOL)showDeleteAnimationWithCompleteAction:(id /* block */)a0;
- (void)forceStopPagAnimation;
- (void).cxx_destruct;

@end
