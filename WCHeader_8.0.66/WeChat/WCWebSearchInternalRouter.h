@interface WCWebSearchInternalRouter : WebSearchPluginBase

@property (nonatomic) BOOL detailPageEditingFlag;

- (void)markDetailPageEditing;
- (void)launchDetailPage:(id)a0;
- (void)launchDetailSearch:(id)a0 isFromVoice:(BOOL)a1;

@end
