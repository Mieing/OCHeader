@class UIImageView, NSString, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLiveGameInteractEntranceItem : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *animationBgView;
@property (copy, nonatomic) NSString *animationWebpStr;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) UILabel *bottomTitleLbl;

- (void)renderStatus:(unsigned long long)a0;
- (void)p_animateWithResourceName:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 DIContext:(id)a1;
- (void)hideRedDot:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadViews;

@end
