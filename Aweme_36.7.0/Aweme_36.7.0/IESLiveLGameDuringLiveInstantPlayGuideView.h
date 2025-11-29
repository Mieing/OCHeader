@class UIButton, NSString, IESLiveAnimatedImageView, UILabel, UIView;
@protocol IESLiveLGameDuringLiveInstantPlayGuideViewDelegate;

@interface IESLiveLGameDuringLiveInstantPlayGuideView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveAnimatedImageView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *secondDescContainerView;
@property (retain, nonatomic) UIButton *knowButton;
@property (copy, nonatomic) NSString *backgroundImageUrl;
@property (weak, nonatomic) id<IESLiveLGameDuringLiveInstantPlayGuideViewDelegate> delegate;

- (void)onTapCloseButton;
- (void)updateInstantPlayViewConstraints;
- (void)onTapBlankButton;
- (void)onTapIKnownButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
