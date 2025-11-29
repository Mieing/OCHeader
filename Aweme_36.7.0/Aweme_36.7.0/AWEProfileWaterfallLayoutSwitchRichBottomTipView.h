@class NSString, UIImageView, DUXButton, UILabel, UIView, UIButton;

@interface AWEProfileWaterfallLayoutSwitchRichBottomTipView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *bigImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) DUXButton *containerButton;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isDismissing;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickActionButton;
- (void)showOnView:(id)a0 bottomOffset:(double)a1;
- (void)didClickCloseButton;
- (void)setShowAnimation;
- (void)setHideAnimation;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
