@class NSString, UIImageView, UIImage, AWEVideoPublishViewModel, UIActivityIndicatorView;

@interface ACCImageEditMediaContainerView : UIView <ACCMediaContainerViewProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPlayerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editPlayerFrame;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) BOOL needAdaptForXScreen;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
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
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrameForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isPlayerContainsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateOriginalFrameWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)builder;
- (void)resetView;

@end
