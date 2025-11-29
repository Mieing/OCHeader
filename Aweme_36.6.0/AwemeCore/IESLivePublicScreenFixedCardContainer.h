@class IESLivePSComponentConfigModel, HTSEventContext, UIView;

@interface IESLivePublicScreenFixedCardContainer : UIView <IESLivePSComponentViewProtocol>

@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)setContentView:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;
- (void)resetPreferredSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
