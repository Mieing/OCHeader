@interface AWECommentPanelContainerService : NSObject <AWECommentPanelContainerServiceProtocol>

- (id)businessContainerService;
- (double)commentAnimatorDurationWithType:(unsigned long long)a0;
- (void)commentAnimatorWithType:(unsigned long long)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (id)makeTabContextWithCommentPageContext:(id)a0;
- (id)createCommentPanelController:(id)a0 contextParams:(id)a1 customConfigModel:(id)a2;
- (id)watermarkManager;
- (id)init;

@end
