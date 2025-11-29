@class NSString;

@interface AWEShareToStoryServiceImpl : HTSService <AWEShareToStoryService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareInfoContainerForShareSticker;
- (id)shareToStoryModelWithAwemeModel:(id)a0;
- (id)shareCommentImageToStoryModelWithAwemeModel:(id)a0;
- (void)prepareQuickShareWithShareToStoryModel:(id)a0 trackParams:(id)a1;
- (void)startQuickShareWithShareToStoryModel:(id)a0 trackParams:(id)a1;
- (void)prepareAndStartQuickShareWithShareToStoryModel:(id)a0 trackParams:(id)a1;
- (void)cancelQuickShareTaskIfNeeded:(id)a0;
- (void)styleJsonWithContent:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
- (void)styleJsonWithStoryModel:(id)a0 completion:(id /* block */)a1;
- (void)styleJsonV2WithStoryModel:(id)a0 completion:(id /* block */)a1;
- (void)middleImageStyleJsonWithStoryModel:(id)a0 middleImage:(id)a1 completion:(id /* block */)a2;
- (void)enhancePostscriptStyleJsonWithStoryModel:(id)a0 needPlaceholder:(BOOL)a1 completion:(id /* block */)a2;
- (void)commentShareBubbleStyleJsonWithStoryModel:(id)a0 middleImage:(id)a1 completion:(id /* block */)a2;
- (void)liveEnhancePostscriptStyleJsonWithStoryModel:(id)a0 needPlaceholder:(BOOL)a1 completion:(id /* block */)a2;
- (void)showInputViewWithStoryModel:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (void)showIronManInputViewWithStoryModel:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (void)showInputViewWithLiveStoryModel:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (BOOL)checkIfPlaceHolderExist:(id)a0;
- (id)makePlaceHolderHidden:(id)a0;
- (id)makePlaceHolderHidden:(id)a0 tag:(long long)a1;
- (id)recoverPostscriptPlaceHolder:(id)a0;
- (void)getImageWithURLList:(id)a0 completion:(id /* block */)a1;
- (BOOL)isInMainFeedTab;

@end
