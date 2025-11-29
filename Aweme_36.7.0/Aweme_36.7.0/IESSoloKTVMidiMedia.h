@class IESSoloKTVMidiRender, IESSoloKTVDraftMidiRecordModel;

@interface IESSoloKTVMidiMedia : IESSCImageMedia

@property (retain, nonatomic) IESSoloKTVMidiRender *midiRender;
@property (retain, nonatomic) IESSoloKTVDraftMidiRecordModel *scoreModel;
@property (nonatomic) double startOffset;

- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithMidiData:(id)a0 scoreModel:(id)a1 lyrics:(id)a2 drawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 fps:(double)a4 sourceTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a5;
- (void).cxx_destruct;

@end
