@class WCFinderLiveGenericFeedVM, NSString, MMWebImageView;

@interface WCFinderLiveHomePageAdCell : WCFinderLiveFeedBaseStyleableCell <MMWebImageViewDelegate, WCFinderLiveFeedGenericCardCellProtocol>

@property (retain, nonatomic) MMWebImageView *coverLeftImageView;
@property (retain, nonatomic) MMWebImageView *coverRightImageView;
@property (retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;
+ (double)cellWidthWithContainerModel:(id)a0 inWidth:(double)a1;
+ (id)cellIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithFeedVM:(id)a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
