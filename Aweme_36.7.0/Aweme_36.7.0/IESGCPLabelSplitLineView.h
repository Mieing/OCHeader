@class UIStackView, NSArray, UIColor, NSMutableArray;

@interface IESGCPLabelSplitLineView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *textArray;
@property (retain, nonatomic) NSMutableArray *textLabels;
@property (retain, nonatomic) NSMutableArray *splitViews;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *splitViewColor;
@property (retain, nonatomic) UIColor *descriptionViewTextColor;

- (void)reloadTextColor:(id)a0 splitViewColor:(id)a1;
- (void)layoutSubviewsWithTextArray:(id)a0;
- (id)createTextLabelWithText:(id)a0;
- (id)createSplitView;
- (void)removeAllSubView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;

@end
