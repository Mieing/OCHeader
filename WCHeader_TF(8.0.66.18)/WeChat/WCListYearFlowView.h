@class UITapGestureRecognizer, MMUILabel, MMUIImageView;
@protocol WCListYearFloatViewDelegate;

@interface WCListYearFlowView : MMUIView

@property (retain, nonatomic) MMUILabel *yearLabel;
@property (retain, nonatomic) MMUIImageView *selectDownIcon;
@property (retain, nonatomic) UITapGestureRecognizer *selectTapGesture;
@property (nonatomic) BOOL canClick;
@property (weak, nonatomic) id<WCListYearFloatViewDelegate> delegate;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateYear:(id)a0;
- (void)selectButtonDidClicked;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
