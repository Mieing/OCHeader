@class UIImageView, NSMutableArray, UIView;
@protocol AWETeenSpeedPlayViewProtocol;

@interface AWETeenSpeedPlayView : UIView

@property (retain, nonatomic) UIView *speedPlayContainer;
@property (retain, nonatomic) NSMutableArray *selectItems;
@property (retain, nonatomic) UIImageView *playbackRateIcon;
@property (weak, nonatomic) id<AWETeenSpeedPlayViewProtocol> delegate;

- (void)p_layoutViews;
- (void)p_activateButtonWithPlaybackRateType:(long long)a0;
- (void)clickButton:(id)a0;
- (void)updatePlaybackRateIconPosition:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
