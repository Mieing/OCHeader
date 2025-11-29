@class NSArray, NLEResourceAV_OC;

@interface NLESegmentAudio_OC : NLESegment_OC

@property (copy, nonatomic) NSArray *dve_wavePoints;
@property (nonatomic) struct shared_ptr<cut::model::NLESegmentAudio> { struct NLESegmentAudio *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceAV_OC *audioFile;
@property (retain, nonatomic) NLEResourceAV_OC *reversedAVFile;
@property (retain, nonatomic) NLEResourceAV_OC *normalFile;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } rawDuration;
@property (nonatomic) double absSpeed;
@property (nonatomic) BOOL rewind;
@property (nonatomic) double dbRange;
@property (nonatomic) double balancedGain;

- (BOOL)keepTone;
- (void)setKeepTone:(BOOL)a0;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentAudio> { struct NLESegmentAudio *x0; struct __shared_weak_count *x1; })a0;
- (double)avgCurveSpeed;
- (id)getSegCurvePoints;
- (double)totalSpeed;
- (void)setInitialVolume:(float)a0;
- (float)initialVolume;
- (void)addCurveSpeedPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)curveSpeedPoints;
- (void)setSegCurvePoints:(id)a0;
- (void)removeAllCurveSpeedPoint;
- (long long)getDurationWithoutCurveSpeed;
- (void)setAudioChanger:(unsigned long long)a0;
- (unsigned long long)getAudioChanger;
- (id)curveActionBeam;
- (void)setCurveActionBeam:(id)a0;
- (unsigned long long)curveSpeedType;
- (id)getCurveActionBeamPoints;
- (void)setCurveActionBeamPoints:(id)a0;
- (double)actionBeamAvgSpeed;
- (BOOL)hasDecryptionKey;
- (void)setTimeClipStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeClipStart;
- (void)setTimeClipEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeClipEnd;
- (id)getResNode;
- (double)getAbsSpeed;
- (BOOL)getRewind;
- (void)setRepeatCount:(long long)a0;
- (id)decryptionKey;
- (void).cxx_destruct;
- (long long)repeatCount;
- (unsigned long long)getType;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getDuration;
- (id)init;
- (void)setVolume:(float)a0;
- (double)speed;
- (void)setDecryptionKey:(id)a0;
- (void)setSpeed:(double)a0;
- (float)volume;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })fadeInLength;
- (void)setFadeInLength:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })fadeOutLength;
- (void)setFadeOutLength:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
