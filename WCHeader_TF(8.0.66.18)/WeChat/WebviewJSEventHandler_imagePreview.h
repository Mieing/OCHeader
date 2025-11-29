@class NSString, PhotoViewController;

@interface WebviewJSEventHandler_imagePreview : WebviewJSEventHandlerBase <PhotoViewControllerDelegate> {
    PhotoViewController *m_photoViewController;
    long long _webViewInterfaceOrientation;
}

@property (nonatomic) unsigned int currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)uninitImageViewer;
- (void)showImageWithUrls:(id)a0 allCaches:(id)a1 current:(id)a2 currentImage:(id)a3 currentPos:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 isForbidForward:(BOOL)a5 isShowMenu:(BOOL)a6 isShowIndicator:(BOOL)a7 config:(id)a8;
- (void)dealloc;
- (void)photoVCWillBePoped;
- (void)photoVCDidBePoped;
- (void)photoVCDidScrollToIndex:(unsigned int)a0;
- (void)sendImagePreviewIndexChangeEvent;
- (void).cxx_destruct;

@end
