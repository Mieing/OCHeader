@class UIStackView, UIImageView, UILabel, AWEIMGroupSpeakModeItemViewModel, UITapGestureRecognizer;

@interface AWEIMGroupSpeakModeItemView : UIView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *tailImageView;
@property (readonly, nonatomic) UIImageView *leadingImageView;
@property (readonly, nonatomic) UIStackView *containerStackView;
@property (readonly, nonatomic) UIStackView *contentStackView;
@property (readonly, nonatomic) UIStackView *leadingStackView;
@property (readonly, nonatomic) UIStackView *tailStackView;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, nonatomic) AWEIMGroupSpeakModeItemViewModel *viewModel;

- (void)createComponents;
- (void)addView:(id)a0 toPosition:(long long)a1;
- (void)refreshStackViewVisible;
- (id)createTemplateStackView;
- (void)refreshStackViewVisibleState:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)addObserver;
- (void)handleTapGesture:(id)a0;
- (void)layoutComponents;

@end
