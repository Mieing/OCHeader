@class UIImageView, UILabel, UIView;

@interface AWEPOIVideoLandscapeEntryView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *rotationIcon;
@property (retain, nonatomic) UILabel *rotationText;
@property (copy, nonatomic) id /* block */ landscapeStateChange;

- (void)adjustLayout;
- (void)onClickAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
