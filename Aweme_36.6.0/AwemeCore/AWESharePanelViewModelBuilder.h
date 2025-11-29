@interface AWESharePanelViewModelBuilder : NSObject

+ (id)buildSharePanelViewModelWithTask:(id)a0 shareView:(id)a1;
+ (id)shareItemsWithTask:(id)a0 withShareItemType:(long long)a1;
+ (id)buildSharePanelViewModelWithTask:(id)a0 shareView:(id)a1 customDownload:(BOOL)a2;
+ (id)makeItemWithStyle:(unsigned long long)a0 channel:(id)a1 task:(id)a2 shareView:(id)a3;
+ (void)updateDownloadItemPosition:(id)a0 context:(id)a1;
+ (BOOL)shouldDisableItemWithChannel:(id)a0 Task:(id)a1;
+ (id)buildModalSharePanelViewModelWithTask:(id)a0 shareView:(id)a1;

@end
