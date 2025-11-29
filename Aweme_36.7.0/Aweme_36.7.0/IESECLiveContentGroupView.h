@class UIColor, UIFont, IESECLiveStackContainerView, UIView, NSMutableArray;

@interface IESECLiveContentGroupView : UIView

@property (nonatomic) double wholeContentWidth;
@property (retain, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) NSMutableArray *contentLabels;
@property (retain, nonatomic) NSMutableArray *splitViews;
@property (retain, nonatomic) NSMutableArray *contentViews;
@property (nonatomic) unsigned long long contentSplitStyle;
@property (retain, nonatomic) UIFont *contentFont;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIColor *splitColor;
@property (nonatomic) double splitSpacing;
@property (nonatomic) struct CGSize { double width; double height; } splitSize;
@property (nonatomic) double iconTextSpacing;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) IESECLiveStackContainerView *contentTextContainerView;
@property (nonatomic) BOOL shouldLayoutRight;
@property (nonatomic) BOOL shouldLayoutLabelRight;
@property (nonatomic) BOOL showItemWithBgcolor;
@property (retain, nonatomic) UIColor *contentItemBgColor;

- (void)updateTextContent:(id)a0;
- (id)initWithShouldLayoutRight:(BOOL)a0;
- (id)setupNewContentItemViewAtIndex:(long long)a0 withIconModel:(id)a1 withTextContent:(id)a2;
- (id)setupNewContentItemViewAtIndex:(long long)a0 withIconModel:(id)a1 withTextContent:(id)a2 withTagModel:(id)a3;
- (id)newContentItemView;
- (id)newContentLabel;
- (id)newSplitView;
- (void)updateTextContentWithModel:(id)a0;
- (void)updateIconTextSplitContentWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (id)newImageView;

@end
