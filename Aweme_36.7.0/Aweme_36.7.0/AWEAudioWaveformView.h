@class NSArray, AVAsset, UIColor;

@interface AWEAudioWaveformView : UIView

@property (retain, nonatomic) NSArray *filteredSamples;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) UIColor *hasRecordedColor;
@property (retain, nonatomic) UIColor *playingColor;
@property (retain, nonatomic) UIColor *toBePlayedColor;
@property (retain, nonatomic) UIColor *notPlayedColor;
@property (nonatomic) double hasRecordedLocation;
@property (nonatomic) double playingLocation;
@property (nonatomic) double toBePlayedLocation;

- (void)drawWithStartLocation:(double)a0 endLocation:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 filterSamples:(id)a3 context:(struct CGContext { } *)a4 color:(id)a5;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
