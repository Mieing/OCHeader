@class AWEPostPageReeditPreviewServiceDependencies;

@interface AWEPostPageReeditPreviewHandlerV2 : AWEPostPagePreviewHandler

@property (retain, nonatomic) AWEPostPageReeditPreviewServiceDependencies *extraDependencies;

- (void)bindServices:(id)a0;
- (void)configCoverAndFirstFrame;
- (void)chooseCoverActionWithChooseCoverPageWillShowBlock:(id /* block */)a0 chooseCoverPageWillDismissBlock:(id /* block */)a1 indexForCoverEdit:(long long)a2 activeNLE:(BOOL)a3 enterMethod:(id)a4;
- (void)previewImageAtIndex:(long long)a0;
- (BOOL)isNoCompileResourceIdsForSharePost;
- (void)superChooseCoverActionWithChooseCoverPageWillShowBlock:(id /* block */)a0 chooseCoverPageWillDismissBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
