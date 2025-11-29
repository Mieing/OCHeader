@class UIView, UILabel, RichTextView, UIButton;
@protocol CameraScanTipsViewDelegate;

@interface CameraScanTipsView : UIView

@property (nonatomic) BOOL hasFrontCamera;
@property (retain, nonatomic) UIButton *icon;
@property (retain, nonatomic) UILabel *noCameraTips;
@property (retain, nonatomic) UILabel *frontCameraTips;
@property (retain, nonatomic) RichTextView *frontCameraOpreationTips;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *coverButton;
@property (retain, nonatomic) UIButton *maskButton;
@property (weak, nonatomic) id<CameraScanTipsViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frontCamera:(BOOL)a1;
- (void)setupSubviews;
- (void)containerButtonTapped:(id)a0;
- (void)handleLongPress:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
