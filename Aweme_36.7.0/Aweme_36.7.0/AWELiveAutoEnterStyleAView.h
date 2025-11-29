@class AWELiveWebPPlayer, CAShapeLayer, NSDictionary, UILabel, UIView, AWELiveFeedStatusViewModel;

@interface AWELiveAutoEnterStyleAView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } liveStatusFrame;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *nextTextLabel;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) AWELiveFeedStatusViewModel *viewModel;
@property (retain, nonatomic) AWELiveWebPPlayer *liveAnimationView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSDictionary *configDict;

- (BOOL)isWidthChanged;
- (void)relayoutWidthAnimation;
- (void)startBorderAnimationWithDuration:(long long)a0;
- (id)initWithLiveStatusFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withViewModel:(id)a1 configDict:(id)a2;
- (void)startScrollTitleAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)labelFontSize;
- (void)setupUI;
- (void)updateData;

@end
