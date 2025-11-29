@class NSMutableArray;

@interface IESSoloKTVDraftColorsModel : NSObject

@property (retain, nonatomic) NSMutableArray *colors;
@property (retain, nonatomic) NSMutableArray *colorFrames;
@property (nonatomic) float fps;

- (void)calcColorFrames:(float)a0 duration:(double)a1 completion:(id /* block */)a2;
- (id)createColorData;
- (void)calcColorFrames:(float)a0 videoPath:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
