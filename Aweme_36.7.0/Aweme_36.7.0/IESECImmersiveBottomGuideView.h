@class UIImageView, UILabel, IESECGradientView;

@interface IESECImmersiveBottomGuideView : IESECGoodsFeedImmersiveBaseView

@property (retain, nonatomic) UIImageView *leftIconImageView;
@property (retain, nonatomic) UIImageView *rightIconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESECGradientView *backgroundGradientView;
@property (copy, nonatomic) id /* block */ clickGuideBlock;
@property (copy, nonatomic) id /* block */ clickBlankBlock;

- (void)configUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)updateWithViewModel:(id)a0;
- (void)handleTapGesture:(id)a0;

@end
