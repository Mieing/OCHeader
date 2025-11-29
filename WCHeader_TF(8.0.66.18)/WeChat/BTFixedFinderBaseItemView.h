@class RichTextView, MMWebImageView, BTFinderItemHeaderContainerView, WCFinderTagView, MMUIButton, UIImageView, BTFinderItemBackgroundImageView, NSString, BTFinderItemCoverContainerView, MMUILabel, BTFinderItemViewModel, SightIconView;

@interface BTFixedFinderBaseItemView : MMUIView <MMImageLoaderObserver, MMWebImageViewDelegate, WCFinderShareAbstractCell>

@property (retain, nonatomic) BTFinderItemViewModel *viewModel;
@property (retain, nonatomic) BTFinderItemHeaderContainerView *headerContainerView;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *finderImageView;
@property (retain, nonatomic) BTFinderItemCoverContainerView *coverContainerView;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) BTFinderItemBackgroundImageView *backgroundCoverImageView;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) RichTextView *titleTextView;
@property (retain, nonatomic) MMUILabel *digestLabel;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) UIImageView *timeLabelBackgroundImageView;
@property (retain, nonatomic) MMUILabel *createTimeLabel;
@property (retain, nonatomic) WCFinderTagView *membershipTagView;
@property (retain, nonatomic) MMUILabel *recommendTipLabel;
@property (retain, nonatomic) MMUIButton *feedbackBtn;
@property (copy, nonatomic) id /* block */ onClickCoverAreaBlock;
@property (copy, nonatomic) id /* block */ onLongClickCoverAreaBlock;
@property (copy, nonatomic) id /* block */ onClickInfoAreaBlock;
@property (copy, nonatomic) id /* block */ onLongClickInfoAreaBlock;
@property (copy, nonatomic) id /* block */ onClickFeedbackBtnBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemViewModel:(id)a1;
- (void)updateWithItemViewModel:(id)a0;
- (void)setupHeader:(id)a0;
- (void)setHeaderContainerViewToOpaque;
- (void)setupCoverContainer:(id)a0;
- (void)setInfoAreaHighlight:(BOOL)a0;
- (void)setContentAreaHighlight:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getInfoAreaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getContentAreaFrame;
- (id)getContentView;
- (void)setupSubviews;
- (void)loadData:(BOOL)a0;
- (void)layoutTitleTextView;
- (void)layoutHeader;
- (void)layoutCoverContainerView:(id)a0;
- (void)layoutSubviews;
- (void)onLoadCoverImage:(id)a0;
- (double)getExpectedWHRatio;
- (void)onClickFeedbackBtn;
- (void)onClickInfoArea;
- (void)onLongClickInfoArea;
- (void)onClickContentArea;
- (void)onLongClickContentArea;
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
