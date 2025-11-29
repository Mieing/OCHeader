@interface WCFinderMusicTemplateSelectViewModel : WCFinderVideoTemplateSelectBasicViewModel

- (id)mmkvKey;
- (BOOL)hasLocalFirstTemplate;
- (id)localFirstTemplate;
- (id)genOmjTemplateArray;
- (void)getTemplateResourceWithSuccessful:(id /* block */)a0 failed:(id /* block */)a1;
- (void)startDownloadMediaResource:(id)a0 successful:(id /* block */)a1;

@end
