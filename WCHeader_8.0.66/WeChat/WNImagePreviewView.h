@class UIColor, UIView;

@interface WNImagePreviewView : UIView

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *wnTextView;
@property (retain, nonatomic) UIColor *bkgColor;

- (id)initViewWithHeaderView:(id)a0 andBottomView:(id)a1 andWNTextView:(id)a2 andBackgroundColor:(id)a3 andSize:(struct CGSize { double x0; double x1; })a4;
- (void).cxx_destruct;

@end
