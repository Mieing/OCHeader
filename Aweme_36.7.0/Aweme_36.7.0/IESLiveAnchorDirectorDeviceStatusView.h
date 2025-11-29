@class UILabel, UIImageView, UIView;

@interface IESLiveAnchorDirectorDeviceStatusView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *statusRightIcon;
@property (copy, nonatomic) id /* block */ clickBlock;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)statusViewClicked;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)updateTitle:(id)a0;

@end
