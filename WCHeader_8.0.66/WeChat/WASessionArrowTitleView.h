@class UIButton, NSString, UIImageView, UIView, MMUILabel;
@protocol WASessionArrowTitleViewDelegate;

@interface WASessionArrowTitleView : MMUIView

@property (nonatomic) BOOL isFromBusiness;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) UIButton *profileButton;
@property (nonatomic) BOOL hideArrowIcon;
@property (weak, nonatomic) id<WASessionArrowTitleViewDelegate> delegate;

- (id)initWithTitleTypeIsFromBusiness:(BOOL)a0 maxWidth:(double)a1;
- (id)initWithTitleTypeIsFromBusiness:(BOOL)a0 maxWidth:(double)a1 hideArrowIcon:(BOOL)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)onClickTitle;
- (void).cxx_destruct;

@end
