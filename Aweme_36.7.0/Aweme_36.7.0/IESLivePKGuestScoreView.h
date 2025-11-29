@class UILabel, IESLiveImageView, NSString;

@interface IESLivePKGuestScoreView : UIView

@property (retain, nonatomic) IESLiveImageView *iconView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) NSString *cachedScore;

- (void)updateScore:(id)a0;
- (void)doAnimationWithScore:(id)a0;
- (void)checkCachedScore;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
