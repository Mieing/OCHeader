@class MMUILabel, WCFinderFeedImageCDNView, WCFinderMPInterestData, NSString, UIView, BTRichTextTagView, BTFinderInterestCellContainerView;

@interface BTFinderInterestItemCell : UICollectionViewCell <WCFinderShareAbstractCell>

@property (retain, nonatomic) BTFinderInterestCellContainerView *containerView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *topCoverView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *middleCoverView;
@property (retain, nonatomic) UIView *middleCoverBgView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *bottomCoverView;
@property (retain, nonatomic) BTRichTextTagView *textView;
@property (retain, nonatomic) MMUILabel *recommendLabel;
@property (retain, nonatomic) WCFinderMPInterestData *interestData;
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
- (void)updateWithInterestData:(id)a0;
- (void)setContentAreaHighlight:(BOOL)a0;
- (void)setupSubviews;
- (void)loadData;
- (void)updateCoverView:(id)a0 withDataItem:(id)a1;
- (void)onClickContentArea;
- (void)onLongClickContentArea;
- (id)textViewStylesWithText:(id)a0;
- (id)transitionStartImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionStartImageRectInView:(id)a0 willPresent:(BOOL)a1;
- (void)doShareAnimation;
- (void).cxx_destruct;

@end
