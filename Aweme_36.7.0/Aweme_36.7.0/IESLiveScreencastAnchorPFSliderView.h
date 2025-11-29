@class UISlider, UILabel, UIView, UIButton;

@interface IESLiveScreencastAnchorPFSliderView : UIView

@property (nonatomic) BOOL isMoving;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *questionButton;
@property (retain, nonatomic) UISlider *slider;
@property (retain, nonatomic) UILabel *detailLabel;
@property (nonatomic) BOOL showQuestionButton;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ sliderValueEndChange;
@property (copy, nonatomic) id /* block */ questionButtonDidClick;

- (void)sliderTouchUp:(id)a0;
- (void)sliderValueChanged:(id)a0 event:(id)a1;
- (void)questionButtonDidClick:(id)a0;
- (void)updateSliderWithValue:(long long)a0;
- (void)sliderValueChanged:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)sliderTouchDown:(id)a0;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1;

@end
