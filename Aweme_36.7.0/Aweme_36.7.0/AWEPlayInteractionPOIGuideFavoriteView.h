@class UIControl, AWEPlayInteractionPOIGuideFavoriteConfig, UIImageView, UILabel, UIView;
@protocol AWEPOICollectViewProtocol;

@interface AWEPlayInteractionPOIGuideFavoriteView : UIView

@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIView *leftCenterView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIControl<AWEPOICollectViewProtocol> *leftImageControl;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIView *rightCenterView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) AWEPlayInteractionPOIGuideFavoriteConfig *config;

- (void)p_configUI;
- (void)p_layoutUI;
- (void)renderUIWithConfig:(id)a0;
- (void)updateUIWithIsCollected:(BOOL)a0 animated:(BOOL)a1;
- (void)p_buildUI;
- (void)p_updateUIWithIsCollected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
