@class UIImage, NSString, EditImageIntialView;
@protocol MMImageCropperDelegate;

@interface MMImageCropperViewController : MMUIViewController <UIScrollViewDelegate, EditImageInitialViewDelegate> {
    EditImageIntialView *_editImageInitialView;
}

@property (retain, nonatomic) UIImage *originalImage;
@property (nonatomic) long long cropperViewStyle;
@property (nonatomic) BOOL keepImgScale;
@property (weak, nonatomic) id<MMImageCropperDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } rectRatioSize;
@property (nonatomic) BOOL openByYuanBaoh5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0;
- (id)initWithImage:(id)a0 andScene:(long long)a1;
- (id)initWithImage:(id)a0 andScene:(long long)a1 keepImgScale:(BOOL)a2;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)initView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)getDisplayImage:(id /* block */)a0;
- (void)getOriginalImage:(id /* block */)a0;
- (id)currentViewController;
- (void).cxx_destruct;

@end
