@class UIImageView, IESECGradientView, UIView, UILabel, IESECLiveInteractionVibeModel;

@interface IESECLiveInteractionVibeItemViewV2 : UIView

@property (retain, nonatomic) IESECGradientView *bgView;
@property (retain, nonatomic) UIImageView *goodCover;
@property (retain, nonatomic) UIView *indexLabelContainer;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) IESECLiveInteractionVibeModel *vibeModel;
@property (copy, nonatomic) id /* block */ clickHandler;

- (void)generateUIWithVibeModel:(id)a0;
- (id)getGradientLocationWithCGColors:(id)a0;
- (id)initWithVibeModel:(id)a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;

@end
