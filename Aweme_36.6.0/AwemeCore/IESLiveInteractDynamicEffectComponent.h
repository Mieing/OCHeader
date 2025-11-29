@class NSString;

@interface IESLiveInteractDynamicEffectComponent : IESLiveInteractComponentBase <IESLiveInteractDynamicEffectRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindContext;
- (void)removeVideoDecorationFromPreviewWithEffectModel:(id)a0;
- (BOOL)isVideoDecorationAddedToPreviewWithEffectModel:(id)a0;
- (void)playEmojiAnimationInSeatOfUser:(id)a0 URL:(id)a1 completion:(id /* block */)a2;
- (void)playAnimationInFullScreenContainerWithSize:(struct CGSize { double x0; double x1; })a0 URL:(id)a1 completion:(id /* block */)a2;
- (void)addVideoDecorationToPreviewWithEffectModel:(id)a0;

@end
