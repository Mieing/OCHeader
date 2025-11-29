@class NSString, ACCStickerContainerView;
@protocol AEKMegaEditor;

@interface ACCCommonStickerDataModel : NSObject

@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (copy, nonatomic) NSString *stickerId;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;

- (id)stickerWithId:(id)a0;
- (id)initWithMegaEditor:(id)a0 stickerId:(id)a1 stickerContainer:(id)a2;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })position;
- (double)scale;
- (double)rotation;
- (double)alpha;
- (struct CGSize { double x0; double x1; })size;
- (id)timeRanges;

@end
