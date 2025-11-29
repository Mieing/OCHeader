@class UIImageView, NSDictionary, UILabel, UIView;

@interface AWENearbyCityDoubleSwitchToSingleView : UIView

@property (nonatomic) BOOL hasShowButtonLog;
@property (nonatomic) BOOL hasShowLittleButtonLog;
@property (retain, nonatomic) UIView *backToSingleColumnIconContainerView;
@property (retain, nonatomic) UIImageView *backToSingleColumnIcon;
@property (retain, nonatomic) UILabel *backToSingleColumnLabel;
@property (retain, nonatomic) UIView *littleBackToSingleColumnIconContainerView;
@property (retain, nonatomic) UIImageView *littleBackToSingleColumnIcon;
@property (copy, nonatomic) NSDictionary *logExtra;

- (id)commonParams;
- (void)feedScrollViewDidScroll:(id)a0;
- (id)backToSingleColumnIconImage;
- (void)backToSingleColumn:(id)a0;
- (void)trackSwitchBtnShow;
- (void)trackSwitchBtnClick;
- (void)didAddedToSuperview;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
