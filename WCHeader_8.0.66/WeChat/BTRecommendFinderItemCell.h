@class UIView, MMWebImageView, NSString, BTScrollabelFinderItemCoverContainerView, BTFinderItemBlurView, BTRichTextTagView, BTScrollableFinderItemBackgroundImageView, MMUILabel, BTFinderItemViewModel;

@interface BTRecommendFinderItemCell : UICollectionViewCell <MMImageLoaderObserver, MMWebImageViewDelegate, WCFinderShareAbstractCell>

@property (retain, nonatomic) BTFinderItemViewModel *viewModel;
@property (retain, nonatomic) BTScrollabelFinderItemCoverContainerView *coverContainerView;
@property (retain, nonatomic) BTScrollableFinderItemBackgroundImageView *backgroundCoverImageView;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) BTFinderItemBlurView *blurView;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UIView *authorView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) BTRichTextTagView *titleLabel;
@property (retain, nonatomic) MMUILabel *recommendLabel;
@property (nonatomic) BOOL forceAutoBlurHeight;
@property (copy, nonatomic) id /* block */ onClickCoverAreaBlock;
@property (copy, nonatomic) id /* block */ onLongClickCoverAreaBlock;
@property (copy, nonatomic) id /* block */ onClickInfoAreaBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (double)cellHeight;
+ (double)cellWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithItemViewModel:(id)a0;
- (void)setContentAreaHighlight:(BOOL)a0;
- (void)setupSubviews;
- (void)loadData;
- (void)onLoadCoverImage:(id)a0;
- (double)getExpectedWHRatio;
- (void)onClickInfoArea;
- (void)onClickContentArea;
- (void)onLongClickContentArea:(id)a0;
- (id)titleLabelStyles;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)transitionStartImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionStartImageRectInView:(id)a0 willPresent:(BOOL)a1;
- (void)doShareAnimation;
- (void).cxx_destruct;

@end
