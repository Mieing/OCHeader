@class UIStackView, MJCircleProgressView, MMUIButton, MMUILabel;
@protocol MJShootAIGCAsyncGenerationStateBarDelegate;

@interface MJShootAIGCAsyncGenerationStateBar : MMUIView

@property (retain, nonatomic) MJCircleProgressView *progressView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIStackView *labelContainer;
@property (retain, nonatomic) MMUIButton *notifyButton;
@property (readonly, nonatomic) unsigned long long barStyle;
@property (weak, nonatomic) id<MJShootAIGCAsyncGenerationStateBarDelegate> delegate;

+ (id)titleLabelFont;
+ (id)descLabelFont;
+ (id)notifyButtonFont;
+ (id)notifyButtonTitle;

- (id)initWithStyle:(unsigned long long)a0;
- (void)commonInit;
- (void)layoutSubviews;
- (void)switchToStyle:(unsigned long long)a0;
- (void)notifyButtonTouchUpInside:(id)a0;
- (void)updateProgress:(double)a0;
- (void)updateRemainingTimeInMinute:(long long)a0 enableShowLongWaitButton:(BOOL)a1;
- (void)updateDescLabelContent:(id)a0;
- (void)updateTitleLabelContent:(id)a0;
- (void).cxx_destruct;

@end
