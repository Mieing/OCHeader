@class IESSCMetalImage, NSString, IESSCRenderStage;

@interface IESSCImageMedia : IESSCMedia <IESSCRenderStageDelegate>

@property (copy, nonatomic) id /* block */ cleanBlock;
@property (retain, nonatomic) IESSCRenderStage *renderStage;
@property (retain, nonatomic) IESSCMetalImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tracksForType:(id)a0;
- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithImage:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateRenderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 timelineTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)performCleanImage;
- (void)cancelPerformCleanCache;
- (void)renderStageFisrtTimeLeaveRenderTimeRange;
- (void)renderStageFisrtTimeEnterRenderTimeRange;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
