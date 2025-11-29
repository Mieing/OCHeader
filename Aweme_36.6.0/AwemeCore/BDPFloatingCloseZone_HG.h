@class UILabel, BDPFloatingCloseIcon_HG, UIVisualEffectView;
@protocol BDPFloatingDelegate_HG;

@interface BDPFloatingCloseZone_HG : UIView

@property (nonatomic) BOOL readyClose;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) BDPFloatingCloseIcon_HG *closeIcon;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) struct CGSize { double width; double height; } parentSize;
@property (readonly, nonatomic) double radius;
@property (weak, nonatomic) id<BDPFloatingDelegate_HG> floatingDelegate;

- (void)showOn:(id)a0;
- (void)setupBaseUIWithTime:(double)a0;
- (void)changeUIReadyClose:(BOOL)a0;
- (void)setupCloseUI;
- (void).cxx_destruct;
- (id)init;
- (void)hide;
- (void)setupUI;

@end
