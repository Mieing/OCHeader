@class UITapGestureRecognizer, MMUILabel, MMUIImageView;
@protocol MMListYearMonthFlowViewDelegate;

@interface MMListYearMonthFlowView : MMUIView

@property (retain, nonatomic) MMUILabel *yearMonthLabel;
@property (retain, nonatomic) MMUIImageView *selectDownIcon;
@property (retain, nonatomic) UITapGestureRecognizer *selectTapGesture;
@property (weak, nonatomic) id<MMListYearMonthFlowViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateYearMonth:(id)a0;
- (void)selectButtonDidClicked;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
