@class NSArray, NSString;
@protocol AEKVideoOperator;

@interface AEKVideoEditorImpl : AEKBaseRenderEditor <AEKVideoEditor>

@property (retain, nonatomic) NSArray *videoOperators;
@property (readonly, copy, nonatomic) NSArray *videos;
@property (readonly, nonatomic) id<AEKVideoOperator> mainVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)canvasRatio;
- (id)addVideoWithResource:(id)a0 isMainVideo:(BOOL)a1;
- (id)videoWithClipId:(id)a0;
- (id)videoWithID:(id)a0;
- (BOOL)hasVideoWithID:(id)a0;
- (BOOL)hasVideoUsingUmpire:(id /* block */)a0;
- (id)setCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)batch:(id /* block */)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })totalDuration;
- (struct CGSize { double x0; double x1; })canvasSize;

@end
