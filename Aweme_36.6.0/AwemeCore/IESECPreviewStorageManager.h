@class IESECPdpGalleryModel, NSMutableDictionary, IESECMediaPreviewRequest;

@interface IESECPreviewStorageManager : NSObject <IESECPreviewStorageService>

@property (retain, nonatomic) IESECPdpGalleryModel *gallery;
@property (nonatomic) BOOL isShowingAllVideos;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (retain, nonatomic) NSMutableDictionary *videoMap;
@property (retain, nonatomic) IESECMediaPreviewRequest *request;
@property (nonatomic) double bottomHeight;
@property (nonatomic) double bottomLeftRightMargin;

+ (id)getPreviewImageWithURLStr:(id)a0;

- (id)getVideoModelWithItem:(id)a0;
- (id)getPlayerViewWithItem:(id)a0;
- (id)playerViewWithVideoModel:(id)a0 previewImageURL:(id)a1 whScale:(double)a2;
- (BOOL)hasBottomSlice;
- (BOOL)hasInstBottomSlice;
- (id)resizePreviewImage:(id)a0 whScale:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoFrameWhScale:(double)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;

@end
