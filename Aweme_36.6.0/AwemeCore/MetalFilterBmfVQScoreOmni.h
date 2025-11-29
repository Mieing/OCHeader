@class BmfVqscoreOmniOC;

@interface MetalFilterBmfVQScoreOmni : MetalFilterDefault

@property (nonatomic) BOOL enableProcessEffect;
@property (retain, nonatomic) BmfVqscoreOmniOC *vqscoreOmniInstance;
@property (retain, nonatomic) id downloader;
@property BOOL isInited;

- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 index:(int)a1;

@end
