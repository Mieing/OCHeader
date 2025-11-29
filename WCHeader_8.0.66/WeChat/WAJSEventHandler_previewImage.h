@class PhotoViewController;

@interface WAJSEventHandler_previewImage : WAJSEventHandler_BaseEvent {
    PhotoViewController *m_photoViewController;
}

- (void)handleJSEvent:(id)a0;
- (void)uninitImageViewer;
- (void)showImageWithUrls:(id)a0 current:(id)a1 referrerPolicyType:(unsigned long long)a2 showMenu:(BOOL)a3;
- (void)dealloc;
- (void).cxx_destruct;

@end
