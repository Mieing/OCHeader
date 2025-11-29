@protocol IESLiveGuideToolBarProvider;

@interface IESLiveGuideFaceEffectItem : IESLiveGuideToolBarItem

@property (nonatomic) BOOL isIconChanged;
@property (weak, nonatomic) id<IESLiveGuideToolBarProvider> guideToolbarProvider;

- (void)changeToFaceEffectIconWithoutAnimation:(id)a0;
- (void)changeToNormalState;
- (void)changeToFaceEffectIcon:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
