@class UIView, MMWebImageView, WCFinderTagView, BTFinderRecommendRedPacketView, NSString, UIImageView, BTRichTextTagView, MMUILabel, BTFinderItemViewModel, BTScrollabelFinderStyleCoverContainerView;

@interface BTRecommendFinderFlowStyleItemCell : UICollectionViewCell <MMImageLoaderObserver, MMWebImageViewDelegate, WCFinderShareAbstractCell>

@property (retain, nonatomic) BTFinderItemViewModel *viewModel;
@property (retain, nonatomic) BTScrollabelFinderStyleCoverContainerView *coverContainerView;
@property (retain, nonatomic) UIImageView *coverBackgroundImageView;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) WCFinderTagView *membershipTagView;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UIView *authorView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) BTRichTextTagView *titleLabel;
@property (retain, nonatomic) MMUILabel *recommendLabel;
@property (retain, nonatomic) UIView *recommendGradientView;
@property (retain, nonatomic) BTFinderRecommendRedPacketView *redPacketView;
@property (copy, nonatomic) id /* block */ onClickCoverAreaBlock;
@property (copy, nonatomic) id /* block */ onLongClickCoverAreaBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (double)cellHeight;
+ (double)cellWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)coverImageRatio;
- (id)realCoverView;
- (id)realTagView;
- (void)updateWithItemViewModel:(id)a0;
- (void)setContentAreaHighlight:(BOOL)a0;
- (void)setupSubviews;
- (id)coverContainerSubviews;
- (void)loadData;
- (void)onLoadCoverImage:(id)a0;
- (double)getExpectedWHRatio;
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
