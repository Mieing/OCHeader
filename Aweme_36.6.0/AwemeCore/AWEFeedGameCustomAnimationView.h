@class UIStackView, NSString, UILabel, AWEFeedGameGoldCoinAnimationView;
@protocol AWEFeedGameCustomAnimationViewDelegate;

@interface AWEFeedGameCustomAnimationView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEFeedGameGoldCoinAnimationView *animationView;
@property (weak, nonatomic) id<AWEFeedGameCustomAnimationViewDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long amount;

- (void)updateAmountAndPlay:(long long)a0;
- (id)initWithTitle:(id)a0 amount:(long long)a1;
- (void)onClickButton;
- (void)addTapGesture;
- (void).cxx_destruct;
- (void)setupUI;

@end
