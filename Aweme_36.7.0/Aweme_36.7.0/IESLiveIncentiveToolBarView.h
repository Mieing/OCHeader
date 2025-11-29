@class IESLiveIncentiveToolBarCountDownView, UIImageView, NSTimer, UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveIncentiveToolBarView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveIncentiveToolBarCountDownView *countDownView;
@property (retain, nonatomic) UIImageView *normalIconView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) long long viewStatus;

- (void)switchStatus;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 clickBlock:(id /* block */)a1;
- (void)showCountDownViewWithDuration:(double)a0 progress:(double)a1;
- (void)showRemindAnimation;
- (void)noTreasureBoxCouldOpen;
- (void)tapItem;
- (long long)fetchViewStatus;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)setupUI;

@end
