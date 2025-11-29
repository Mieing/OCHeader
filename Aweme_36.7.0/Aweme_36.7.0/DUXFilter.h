@class NSString, UIImageView, UILabel, UIView, DUXFilterUIConfigModel;

@interface DUXFilter : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImg;
@property (retain, nonatomic) DUXFilterUIConfigModel *uiConfig;
@property (copy, nonatomic) id /* block */ selectedChangeCallBackForFilterPanel;
@property (nonatomic) long long filterUse;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL refreshWhenTitleChange;
@property (retain, nonatomic) id value;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL hasExpandableIcon;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;
@property (nonatomic) double customWidth;
@property (copy, nonatomic) id /* block */ shouldChangeSelectCallBack;
@property (copy, nonatomic) id /* block */ selectCallBack;
@property (copy, nonatomic) id /* block */ selectedChangeCallBack;

- (id)initWithTitle:(id)a0 DUXFilterUse:(long long)a1;
- (void)setIcon;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithTitle:(id)a0 DUXFilterUse:(long long)a1 enlargeType:(unsigned long long)a2;
- (void)tapevent:(id)a0;
- (double)p_viewWidth;
- (double)p_viewHeight;
- (double)p_viewConerRadius;
- (double)p_topPadding;
- (void)setTitleLabelComponent;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
