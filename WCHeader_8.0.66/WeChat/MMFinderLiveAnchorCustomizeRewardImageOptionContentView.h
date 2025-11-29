@class MMFinderLiveAnchorCustomizeRewardOptionsHighlightView, NSArray, UIView;

@interface MMFinderLiveAnchorCustomizeRewardImageOptionContentView : MMFinderLiveAnchorCustomizeRewardOptionContentViewBase

@property (retain, nonatomic) UIView *imageContainerView;
@property (retain, nonatomic) UIView *imageLabelContainerView;
@property (retain, nonatomic) UIView *sepline;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardOptionsHighlightView *highlightView;
@property (nonatomic) long long seplineIndex;
@property (nonatomic) long long highlightIndex;
@property (retain, nonatomic) NSArray *imageArray;
@property (retain, nonatomic) NSArray *imageLabelArray;
@property (retain, nonatomic) NSArray *imageViewArray;
@property (retain, nonatomic) NSArray *imageLabelViewArray;
@property (copy, nonatomic) id /* block */ onImageClickedAtIndexBlock;

+ (struct CGSize { double x0; double x1; })imageCellSize;
+ (double)seplineWidth;
+ (double)seplineHeight;

- (id)init;
- (void)layoutSubviews;
- (void)setSeplineAfterIndex:(long long)a0;
- (void)setHighlightImage:(id)a0;
- (void)setHighlightViewAtIndex:(long long)a0;
- (void)setHighlightViewHidden;
- (void)updateWithImageArray:(id)a0 labelArray:(id)a1;
- (id)createImageCellViewWithImage:(id)a0;
- (id)createLabelViewWithText:(id)a0;
- (double)calcImageLeftWithIndex:(long long)a0;
- (void)onTapImageView:(id)a0;
- (void)onSelectImageView:(id)a0;
- (double)contentPerferHeight;
- (void).cxx_destruct;

@end
