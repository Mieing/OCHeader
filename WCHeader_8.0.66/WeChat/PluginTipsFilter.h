@interface PluginTipsFilter : NewTipsFilter

- (BOOL)validateAndDealNewTipsInfoOnReceiveXml:(id)a0;
- (BOOL)canShowTipsWithTipsInfo:(id)a0;
- (void)report:(id)a0;

@end
