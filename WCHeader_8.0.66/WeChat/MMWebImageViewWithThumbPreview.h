@class EmoticonPreviewWindowViewController, NSString, MMImageView, MMWebImageView, EmojiInfo;

@interface MMWebImageViewWithThumbPreview : MMUIView <EmoticonPreviewWindowViewControllerDelegate, MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *m_imageView;
@property (retain, nonatomic) MMImageView *m_imageFocusView;
@property (retain, nonatomic) EmoticonPreviewWindowViewController *previewVC;
@property (retain, nonatomic) EmojiInfo *emojiInfo;
@property (nonatomic) unsigned long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showPreview;
- (void)hidePreview;
- (void)setImageStatic:(BOOL)a0;
- (void)setDefaultImage:(id)a0;
- (BOOL)isPreviewShowing;
- (void)onFinishPreviewAndChangeToPid:(id)a0;
- (void).cxx_destruct;

@end
