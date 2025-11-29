@class NSString;

@interface EcsPreviewImageViewController : PhotoViewController

@property (retain, nonatomic) NSString *mbPassBuffer;

- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragCancel;
- (id)sclView;
- (void)setSclViewHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
