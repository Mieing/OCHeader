@class HTSEventContext, IESLivePSComponentConfigModel;

@interface IESLivePublicScreenMaskPlaceHolderView : UIView <IESLivePSComponentViewProtocol>

@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void).cxx_destruct;

@end
