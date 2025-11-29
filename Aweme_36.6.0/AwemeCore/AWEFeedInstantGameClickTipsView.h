@class UIImageView, UILabel;
@protocol AWEIronManInstantGameProtocol;

@interface AWEFeedInstantGameClickTipsView : UIView

@property (retain, nonatomic) id<AWEIronManInstantGameProtocol> gameManager;
@property (retain, nonatomic) UIImageView *leftImage;
@property (retain, nonatomic) UIImageView *rightImage;
@property (retain, nonatomic) UILabel *tipsLabel;

- (id)ironManModuleService;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
