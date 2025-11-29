@class UIButton, NSMutableArray, NSArray;

@interface IESLLPOIDetailNGCOIListFeedbackView : UIView

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (copy, nonatomic) id /* block */ itemBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) NSArray *feedbacks;

- (void)clickCloseButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
