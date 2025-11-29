@class UIStackView, UIImageView, UILabel, RTVVoipToolButtonInfo, RTVVoipToolTagView;
@protocol RxInjector;

@interface RTVVoipToolButton : UIControl

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipToolButtonInfo *buttonInfo;
@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL softDisable;
@property (nonatomic) BOOL customEnablement;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) RTVVoipToolTagView *tagView;

- (void)__createComponents;
- (void)updateTitleLabelAlpha:(double)a0;
- (id)__titleLabelShadow;
- (id)initWithButtonInfo:(id)a0 injector:(id)a1;
- (void)updateCustomImage:(id)a0 title:(id)a1;
- (void)__layoutComponent;
- (void)__updateAccessibilityInfos;
- (id)__contentInTwoTuple:(id)a0;
- (void)rotateImage:(BOOL)a0 withDegree:(double)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)setAlpha:(double)a0;
- (id)anchorView;
- (void)hideTitleLabel:(BOOL)a0;

@end
