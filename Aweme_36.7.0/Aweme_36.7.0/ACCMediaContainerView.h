@class NSString, UIImageView, UIImage, AWEVideoPublishViewModel, UIActivityIndicatorView;

@interface ACCMediaContainerView : UIView <AEKMediaContainerViewProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPlayerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editPlayerFrame;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL needAdaptForXScreen;
@property (nonatomic) long long extensionDirectionType;
@property (nonatomic) double scale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } croppedOriginalPlayerFrame;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIActivityIndicatorView *boomerangIndicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)realMediaContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bigMediaContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentMediaContainerFrame;
- (id)initWithPublishModel:(id)a0;
- (id)previewUnit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrameForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isPlayerContainsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateOriginalFrameWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)configPublishModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrameForPublishModel:(id)a0;
- (void)configOriginalPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 editPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initForBlankContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrameForSize:(struct CGSize { double x0; double x1; })a0 publishModel:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })singlePhotoCanvasFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shareToStoryCanvasFrame;
- (void).cxx_destruct;
- (id)init;
- (void)builder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetView;

@end
