@class UILabel, UIView;

@interface WCFinderNoMoreView : UIView

@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *logoView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UILabel *tipsLabel;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)useLogoIconName:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)useLogoIconNameOnly:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)installLogoView:(id)a0;
- (void)setColor:(id)a0;
- (void)setTips:(id)a0;
- (id)createPointLogoView;
- (id)lineBackgroundColor;
- (void)setDarkMode:(BOOL)a0;
- (void).cxx_destruct;

@end
