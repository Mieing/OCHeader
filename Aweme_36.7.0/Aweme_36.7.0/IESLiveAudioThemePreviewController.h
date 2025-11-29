@class UIScrollView, UIButton, NSString, IESLiveAudioThemePreviewView, UIView, UILabel, IESLiveAudioThemePreviewTempLiveView;
@protocol IESLivePhotoPickerAsset;

@interface IESLiveAudioThemePreviewController : UIViewController <UIScrollViewDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id<IESLivePhotoPickerAsset> asset;
@property (retain, nonatomic) IESLiveAudioThemePreviewView *previewView;
@property (retain, nonatomic) IESLiveAudioThemePreviewTempLiveView *tempLiveView;
@property (retain, nonatomic) UIView *previewMaskView;
@property (retain, nonatomic) UILabel *cropTipsLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double ratio;
@property (retain, nonatomic) UIView *cropMaskView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0 completion:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })relativeCropRect;
- (id)cropImage:(id)a0 convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)convertedFloat:(double)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;
- (void)cancelAction;
- (struct CGSize { double x0; double x1; })resourceSize;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)confirmAction;
- (void)setActionEnabled:(BOOL)a0;

@end
