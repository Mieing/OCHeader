@interface AWENearbyBigCardVideoResizeHelper : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalContainerFrame;

- (void)shrinkVideoWhenEnterPanel:(id)a0 targetHeight:(double)a1 duration:(double)a2 animation:(BOOL)a3;
- (void)expandVideoWhenClosePanel:(id)a0 duration:(double)a1 animation:(BOOL)a2;
- (void)resizeVideoWhenDragPanel:(id)a0 progress:(double)a1;
- (void)clearRecordFrames;
- (void)prepareForReuse;

@end
