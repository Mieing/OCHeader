@class UIImageView, UILabel, UIView, UIButton;

@interface AWESearchHalfPanelTitleView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *scrollTip;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *zoomButton;
@property (copy, nonatomic) id /* block */ closeHalfPanelBlock;
@property (copy, nonatomic) id /* block */ magnifyHalfPanelBlock;
@property (copy, nonatomic) id /* block */ shrinkHalfPanelBlock;
@property (nonatomic) BOOL panelNineScreen;

- (BOOL)hitAbstractPanelUIExp;
- (void)setNewFrameWithTiTle:(id)a0;
- (void)setFrameWithTiTle:(id)a0;
- (void)closeHalfPanel;
- (void)zoomHalfPanel;
- (void)updateTiTle:(id)a0 icon:(id)a1;
- (void)setNineScreen:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
