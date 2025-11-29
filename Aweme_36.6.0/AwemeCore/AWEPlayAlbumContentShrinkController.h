@protocol AFDRichContentContainerViewControllerProtocol;

@interface AWEPlayAlbumContentShrinkController : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shrinkContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialContentFrame;
@property (weak, nonatomic) id<AFDRichContentContainerViewControllerProtocol> richContentContainer;

- (void)updateAwemeContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAwemeContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animationDuration:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })awemeContentViewInitFrame;
- (void)resizeVideoWhenDragPanel:(double)a0;
- (void)shrinkContentWhenShowPanel:(double)a0;
- (void)shrinkContentWhenShowPanel:(double)a0 animationDuration:(double)a1;
- (void)forceRestoreContent;
- (void)forceRestoreContentWithAnimationDuration:(double)a0;
- (void).cxx_destruct;

@end
