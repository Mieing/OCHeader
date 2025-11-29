@class UILabel, IESECLiveAnchorAirViewConfig, UIView;

@interface IESECLiveAnchorAirView : UIView

@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) UIView *arrowView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) long long time;
@property (nonatomic) double width;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } specialEdgeInsets;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly, nonatomic) IESECLiveAnchorAirViewConfig *config;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)showWithView:(id)a0 target:(id)a1 attributedText:(id)a2;
- (void)showWithView:(id)a0 target:(id)a1 text:(id)a2;
- (void)setBkgColor:(id)a0;
- (void)closeView;
- (void).cxx_destruct;
- (void)setTextColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)setTextFont:(id)a0;
- (void)handleTapGesture:(id)a0;

@end
