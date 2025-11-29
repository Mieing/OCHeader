@class NSArray, NSMutableArray;

@interface WCFinderInteractionLabelGroupView : UIView

@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) NSMutableArray *labelViews;
@property (nonatomic) double fWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithInteractionLabels:(id)a0;
- (void)prepareLabelViews;
- (void)handleLastImageStyle:(id)a0;
- (id)createInteractionTagTextView;
- (void)layoutUI;
- (void)updateSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;

@end
