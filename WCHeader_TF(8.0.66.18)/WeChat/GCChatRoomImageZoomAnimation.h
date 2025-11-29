@class UIImage, NSString;
@protocol GCChatRoomImageZoomAnimationDelegate;

@interface GCChatRoomImageZoomAnimation : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *blurImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imgViewFrame;
@property (nonatomic) long long operation;
@property (retain, nonatomic) NSString *sourcePosIdentifier;
@property (weak, nonatomic) id<GCChatRoomImageZoomAnimationDelegate> zoomAnimationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (BOOL)isPushInAnimation;
- (id)getImgCopy:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerView:(id)a2;
- (double)getMaxScaleFromSrcFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
