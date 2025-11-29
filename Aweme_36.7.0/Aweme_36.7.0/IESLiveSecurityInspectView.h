@class IESLiveSecurityInspectStore, UIImageView, UILabel, UIBezierPath;

@interface IESLiveSecurityInspectView : UIView <HTSLivePluginLayoutView>

@property (weak, nonatomic) IESLiveSecurityInspectStore *store;
@property (retain, nonatomic) UIImageView *containerView;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIBezierPath *path;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL isFirstShow;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1;
- (void)openToFold;
- (double)totalWith1;
- (double)totalWith2;
- (void)openUI;
- (void)foldUI;
- (void)foldToOpen;
- (void).cxx_destruct;
- (id)viewType;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
