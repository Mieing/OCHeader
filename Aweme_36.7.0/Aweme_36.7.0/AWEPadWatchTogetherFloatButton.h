@class UIButton, UIViewController, AWEPadWatchTogetherDefaultIcon;
@protocol AWERTVInviteViewController;

@interface AWEPadWatchTogetherFloatButton : UIView

@property (retain, nonatomic) UIButton *watchTogetherButton;
@property (retain, nonatomic) UIViewController<AWERTVInviteViewController> *feedShareView;
@property (retain, nonatomic) AWEPadWatchTogetherDefaultIcon *defaultIcon;

- (void)getRTVListSelectInviteFriend:(id)a0;
- (void)dismissContentSheet;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
