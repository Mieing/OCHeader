@class NSMutableArray;

@interface IESLiveCommentPopupView : UIView

@property (retain, nonatomic) NSMutableArray *popupViewHeights;
@property (retain, nonatomic) NSMutableArray *curPopViews;
@property (copy, nonatomic) id /* block */ popupBack;
@property (copy, nonatomic) id /* block */ heightChange;
@property (nonatomic) double currentContentViewHeight;
@property (nonatomic) long long currentLevel;

- (void)panelWillHide;
- (void)showContentView:(id)a0 preferredHeight:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
