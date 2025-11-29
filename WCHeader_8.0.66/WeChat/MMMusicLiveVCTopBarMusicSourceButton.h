@class UIImageView, MMUILabel;

@interface MMMusicLiveVCTopBarMusicSourceButton : MMUIButton

@property (retain, nonatomic) UIImageView *musicSourceIconView;
@property (retain, nonatomic) MMUILabel *musicSourceLabel;
@property (retain, nonatomic) UIImageView *musicSourceArrow;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iconImage:(id)a1 appName:(id)a2;
- (void)layoutSubviews;
- (void)reloadWithIconImage:(id)a0 appName:(id)a1;
- (void).cxx_destruct;

@end
