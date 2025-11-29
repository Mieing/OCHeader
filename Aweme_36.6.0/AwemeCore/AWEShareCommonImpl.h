@interface AWEShareCommonImpl : NSObject

+ (id)commonImpl;

- (id)showNewSharePanelWithShareContext:(id)a0 customConfiguration:(id)a1 onViewController:(id)a2;
- (id)showCommonPanelWithTask:(id)a0 onViewController:(id)a1;
- (id)commonChannelWithType:(id)a0 withContext:(id)a1;
- (id)commonURLTaskWithContext:(id)a0 imageURL:(id)a1;
- (id)commonShareWithTask:(id)a0 withType:(id)a1;
- (id)showCommonPanelWithTask:(id)a0 configurationHandler:(id /* block */)a1 onViewController:(id)a2;
- (id)showCommonPanelWithConfiguration:(id)a0 onViewController:(id)a1;
- (id)showCommonLandscapePanelWithConfiguration:(id)a0 onViewController:(id)a1;
- (id)commonShareWithTask:(id)a0 toPlatform:(long long)a1;
- (id)showCommonLandscapePanelWithTask:(id)a0 configurationHandler:(id /* block */)a1 onViewController:(id)a2;
- (id)showCommonTwoSectionPanelWithTask:(id)a0 onViewController:(id)a1;

@end
