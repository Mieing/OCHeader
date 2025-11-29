@class NSString, UIImageView, MMWebImageView, MMUILabel;

@interface BrandFinderLiveCardView : BrandFinderLiveBaseCardView <MMWebImageViewDelegate>

@property (retain, nonatomic) MMUILabel *categoryLabel;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateViewModel:(id)a0;
- (void)updateLiveStatus:(BOOL)a0 statusWording:(id)a1;
- (void)updateRecommendReason:(id)a0;
- (void)configureLayout;
- (void)loadData;
- (void)onLoadCoverImage:(id)a0;
- (void)layoutSubviews;
- (void)updateLiveStatusView;
- (void)updateBackgroundImageWithLiveStatus:(id)a0;
- (void)markDirtyElements:(id)a0;
- (double)titleMaxWidth;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
