@class UIFont, NSString, UIImage, UIImageView, UIButton, UIPanGestureRecognizer, UILabel, UIColor;
@protocol AWECountDownAnchorViewDelegate;

@interface AWECountDownAnchorView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *clearButton;
@property (copy, nonatomic) NSString *backGroundImgURL;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (copy, nonatomic) NSString *currentTitle;
@property (copy, nonatomic) id /* block */ tapAction;
@property (weak, nonatomic) id<AWECountDownAnchorViewDelegate> delegate;
@property (nonatomic) BOOL shouldForbidDrag;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panGestureAction:(id)a0;
- (void)_configSubView;
- (void)clearButtonClick;
- (void)udpateWithTitle:(id)a0;
- (void)updateBackGroundImage:(id)a0 placeHolderImage:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1;
- (void)_setupView;

@end
