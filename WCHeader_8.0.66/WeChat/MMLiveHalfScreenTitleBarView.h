@class NSString, UIImage, UIView, MMUIButton, MMUILabel;
@protocol MMLiveHalfScreenTitleBarViewDelegate;

@interface MMLiveHalfScreenTitleBarView : UIView

@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *indicatorView;
@property (nonatomic) BOOL forceDarkMode;
@property (weak, nonatomic) id<MMLiveHalfScreenTitleBarViewDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) UIImage *leftButtonImage;
@property (nonatomic) double indicatorViewRightMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceDarkMode:(BOOL)a1;
- (void)initView;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setTitleLabelFont:(id)a0;
- (void)setTitleLabelColor:(id)a0;
- (void)onClickLeftButton:(id)a0;
- (void).cxx_destruct;

@end
