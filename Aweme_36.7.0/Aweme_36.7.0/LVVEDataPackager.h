@interface LVVEDataPackager : NSObject

+ (id)verticesForCrop:(struct Crop { void /* function */ **x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })a0;
+ (id)fadeConfigOfSegment:(struct shared_ptr<CutSame::MaterialAudioFade> { struct MaterialAudioFade *x0; struct __shared_weak_count *x1; })a0 targetDuration:(double)a1;
+ (long long)vePlayerStatusWithInt:(long long)a0;
+ (id)pitchConfigWithVoiceName:(id)a0 videoEffectPath:(id)a1;
+ (void)updateCanvasSource:(id)a0 fromClip:(struct Clip { void /* function */ **x0; double x1; struct shared_ptr<CutSame::Flip> { struct Flip *x0; struct __shared_weak_count *x1; } x2; double x3; struct shared_ptr<CutSame::Point> { struct Point *x0; struct __shared_weak_count *x1; } x4; struct shared_ptr<CutSame::Point> { struct Point *x0; struct __shared_weak_count *x1; } x5; })a1 cropScale:(float)a2;
+ (id)canvasConfigForCanvasMaterial:(struct shared_ptr<CutSame::MaterialCanvas> { struct MaterialCanvas *x0; struct __shared_weak_count *x1; })a0 rootPath:(id)a1;
+ (id)filePathInProjec:(struct shared_ptr<CutSame::TemplateModel> { struct TemplateModel *x0; struct __shared_weak_count *x1; })a0 relativePath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a1;
+ (id)pitchConfigOfIndex:(long long)a0 videoEffectPath:(id)a1;
+ (struct CGSize { double x0; double x1; })ibaseScaleAspectFit:(double)a0 toSizeHeight:(double)a1 sourceSize:(struct CGSize { double x0; double x1; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ibaseScaleAspectFit:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sourceSize:(struct CGSize { double x0; double x1; })a1;
+ (int)comStateWithVEStatus:(long long)a0;

@end
