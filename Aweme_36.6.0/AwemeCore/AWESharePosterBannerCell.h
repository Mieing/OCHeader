@class AWEShareLivePostQRCodeSaveButton, AWECyclePagerView, UIImageView, NSString, AWESharePosterBannerContainerView;

@interface AWESharePosterBannerCell : UICollectionViewCell <AWESharePosterBannerContainerViewDelegate>

@property (nonatomic) BOOL saveButtonCanResponseEvent;
@property (retain, nonatomic) AWESharePosterBannerContainerView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEShareLivePostQRCodeSaveButton *saveBtn;
@property (nonatomic) long long pageIndex;
@property (copy, nonatomic) id /* block */ awe_saveCallback;
@property (copy, nonatomic) id /* block */ awe_clickCallback;
@property (weak, nonatomic) AWECyclePagerView *pagerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubContainerView:(id)a0;
- (void)setContainerAccessiblityWithText:(id)a0;
- (void)containerViewAccessibilityElementDidBecomeFocused:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)save;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)click;

@end
