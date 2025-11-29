@class WAMediaPreviewViewController;

@interface WAJSEventHandler_previewMedia : WAJSEventHandler_BaseEvent {
    WAMediaPreviewViewController *m_mediaViewController;
}

- (void)handleJSEvent:(id)a0;
- (void)uninitImageViewer;
- (BOOL)showMediaWithSources:(id)a0 current:(int)a1 referrerPolicyType:(unsigned long long)a2 showMenu:(BOOL)a3;
- (void)dealloc;
- (void).cxx_destruct;

@end
