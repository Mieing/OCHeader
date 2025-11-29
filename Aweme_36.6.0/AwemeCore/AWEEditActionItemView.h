@class UITapGestureRecognizer, AWEEditAndPublishViewData, AWEEditAndPublishViewActionContainerModel, NSString, UIView, UILabel, UIButton;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWEEditActionItemView : UIView

@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *lotAnimationView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *actionView;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) UIView *buttonBgView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWEEditAndPublishViewData *itemData;
@property (retain, nonatomic) AWEEditAndPublishViewActionContainerModel *container;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL enable;
@property (nonatomic) double itemSpacing;
@property (copy, nonatomic) id /* block */ itemViewDidClicked;

- (void)onButtonClicked:(id)a0;
- (id)initWithItemData:(id)a0;
- (void)resetLotView;
- (id)playLOTAnimationNamed:(id)a0 loop:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateActionView:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
