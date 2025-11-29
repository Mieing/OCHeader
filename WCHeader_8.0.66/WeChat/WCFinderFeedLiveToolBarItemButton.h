@class UIImageView, UILabel;

@interface WCFinderFeedLiveToolBarItemButton : MMUIButton

@property (retain, nonatomic) UIImageView *itemImageView;
@property (retain, nonatomic) UILabel *itemTitleLabel;

+ (id)toolbarItemButton;
+ (id)whiteColorWithAlphaComponent;
+ (id)generateStaticIconImage:(id)a0 iconColor:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)setItemImageName:(id)a0 iconColor:(id)a1;
- (void).cxx_destruct;

@end
