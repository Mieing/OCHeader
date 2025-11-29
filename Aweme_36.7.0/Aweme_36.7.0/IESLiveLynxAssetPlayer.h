@protocol IESLiveLynxAssetPlayerDelegate;

@interface IESLiveLynxAssetPlayer : IESLiveLynxAssetAndDynamicBasePlayer

@property (weak, nonatomic) id<IESLiveLynxAssetPlayerDelegate> delegate;

- (id)_obtainAssetListWithDynamicGift:(id)a0 startIndex:(long long)a1;
- (id)_obtainAssetListWithRequiredAssets:(id)a0;
- (void)showDynamicGiftWebViewWith:(id)a0 playCompleteWithStats:(id /* block */)a1;
- (void)showDynamicGiftAnimationWithModel:(id)a0 playCompleteWithStats:(id /* block */)a1;
- (void)didFinishPlayingDynamicGiftWithError:(id)a0;
- (id)buildDynamicGiftModelWithGiftAnimationNode:(id)a0 extraParams:(id)a1;
- (void)showWebViewConsoleWithDynamicGiftAnimationNode:(id)a0 extraParams:(id)a1 playCompleteWithStats:(id /* block */)a2;
- (void).cxx_destruct;

@end
