@class NSMutableArray, NSMutableDictionary;
@protocol IESMMAudioProcessorExProtocol;

@interface IESMMAudioSourceProvider : IESMMObject {
    struct opaqueMTAudioProcessingTap { } *_tap;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
}

@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableDictionary *filterRangeInfo;
@property (retain, nonatomic) id<IESMMAudioProcessorExProtocol> audioProcess;
@property (nonatomic) long long tapProcessStatus;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } effectiveRange;
@property (readonly, nonatomic) struct opaqueMTAudioProcessingTap { } *tap;

+ (id)sharedExportInstance;
+ (id)sharedInstance;

- (void)processProc:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 withTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)addFilter:(id)a0 forRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)addFiltersArray:(id)a0 forRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)allFilters;
- (void)process:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 withTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)changAudioEffectProcess:(id)a0;
- (void)resetStatus;
- (void).cxx_destruct;
- (id)init;
- (void)removeFilter:(id)a0;
- (void)dealloc;

@end
