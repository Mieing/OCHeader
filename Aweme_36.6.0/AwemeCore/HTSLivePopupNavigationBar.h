@class UILabel, NSString, UIView;

@interface HTSLivePopupNavigationBar : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *bgBackgroundImageView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *leftBarButtonItem;
@property (retain, nonatomic) UIView *rightBarButtonItem;
@property (retain, nonatomic) UIView *naviBarSepetorLineView;
@property (copy, nonatomic) id /* block */ onLeftBarButtonClick;
@property (copy, nonatomic) id /* block */ onRightBarButtonClick;

- (void)setTopCornerRadius:(double)a0;
- (void)leftBarButtonClick;
- (void)rightBarButtonClick;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
