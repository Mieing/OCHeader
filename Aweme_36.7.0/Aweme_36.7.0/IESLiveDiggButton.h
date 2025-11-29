@class UIImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveDiggButton : IESLivePreviewInteractionView

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationImageView;

- (void)startDiggAnimation;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 image:(id)a1;

@end
