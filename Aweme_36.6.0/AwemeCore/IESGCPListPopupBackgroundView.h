@class UIImageView, UILabel, UIView, UIButton;
@protocol IESGCPListPopupBackgroundViewDelegate;

@interface IESGCPListPopupBackgroundView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentViewWrapper;
@property (retain, nonatomic) UIButton *rightBarButton;
@property (retain, nonatomic) UIButton *leftBarButton;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (weak, nonatomic) id<IESGCPListPopupBackgroundViewDelegate> delegate;

- (void)initUserInterface;
- (double)rightExtraOffset;
- (void)leftBarButtonDidClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 titleText:(id)a1;
- (void)setLeftBarButtonHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)addContentView:(id)a0;

@end
