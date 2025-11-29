@class UIImageView, UILabel, UIView;
@protocol IESLiveGuideUrgeViewDelegate;

@interface IESLiveGuideUrgeView : UIView

@property (weak, nonatomic) id<IESLiveGuideUrgeViewDelegate> delegate;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *mainContainer;
@property (retain, nonatomic) UIView *headLineContainer;
@property (retain, nonatomic) UIImageView *coinIcon;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *firstLineDescriptionLabel;
@property (retain, nonatomic) UILabel *secondLineDescriptionLabel;
@property (retain, nonatomic) UIView *triangleIndicatorIcon;

- (void)p_setupViews;
- (void)p_setupConstraints;
- (void)updateWithAmount:(unsigned long long)a0 userCount:(unsigned long long)a1;
- (void)p_didTapUrgeView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
