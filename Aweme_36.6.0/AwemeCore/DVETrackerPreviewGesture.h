@class DVEVCContext, NSString;
@protocol DVETrackEventProtocol;

@interface DVETrackerPreviewGesture : NSObject

@property (weak, nonatomic) id<DVETrackEventProtocol> trackeventer;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (retain, nonatomic) NSString *zoomType;
@property (nonatomic) BOOL isRotated;
@property (nonatomic) BOOL isSyncPage;
@property (nonatomic) double materialDuration;

- (void)updateMaterialDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateZoomTypeFromScale:(double)a0 toScale:(double)a1;
- (void)trackEventRotateAndZoomType;
- (void)trackEventPan;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
