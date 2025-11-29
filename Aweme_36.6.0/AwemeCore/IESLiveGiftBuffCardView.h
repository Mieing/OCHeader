@class UIImageView, IESLiveGiftBuffCardConfig, UIView, UILabel;
@protocol IESLiveGiftBuffCardViewDelegate;

@interface IESLiveGiftBuffCardView : UIView

@property (retain, nonatomic) IESLiveGiftBuffCardConfig *config;
@property (weak, nonatomic) id<IESLiveGiftBuffCardViewDelegate> delegate;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *basicImageView;
@property (retain, nonatomic) UIImageView *selectedBorder;
@property (retain, nonatomic) UILabel *lockedLabel;
@property (retain, nonatomic) UIImageView *lockedIcon;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIView *remainTimeContainerView;
@property (retain, nonatomic) UILabel *remainTimeLabel;
@property (retain, nonatomic) UIImageView *shimmerImageView;
@property (nonatomic) BOOL showing;

- (void)updateWithSelected:(BOOL)a0;
- (void)startShimmer;
- (void)p_didTapCard;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)setupViews;
- (id)initWithConfig:(id)a0 delegate:(id)a1;

@end
