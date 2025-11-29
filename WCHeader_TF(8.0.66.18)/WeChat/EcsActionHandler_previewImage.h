@class EcsPreviewImageViewController, NSString, EcsMagicCardInstance;

@interface EcsActionHandler_previewImage : EcsActionHandler_Base <PhotoViewControllerDelegate>

@property (retain, nonatomic) EcsPreviewImageViewController *photoViewController;
@property (retain, nonatomic) EcsMagicCardInstance *magicCardInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAction:(id)a0;
- (void)showImageWithUrls:(id)a0 current:(id)a1 showMenu:(BOOL)a2 enableSearch:(BOOL)a3 passBuffer:(id)a4 currentPos:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (void)startMagicCardWithPassBuffer:(id)a0;
- (void)photoVCWillBePoped;
- (void)photoVCDidBePoped;
- (void)photoVCHideAnimationCompleted;
- (void)photoVCDidScrollToIndex:(unsigned int)a0;
- (void)photoVCDidChangeToPage:(unsigned int)a0;
- (void)photoVCWillBePushed;
- (void)photoVCOnLongPressAtIndex:(unsigned int)a0;
- (void).cxx_destruct;

@end
