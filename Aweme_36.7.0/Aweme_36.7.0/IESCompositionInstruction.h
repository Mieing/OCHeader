@class NSString, NSArray, NSMutableDictionary, IESMediaInfo, HTSGLFilter, NSMutableArray, IESMediaFilterInfo, HTSGLFilterTwoInput, HTSRawDataOutputRender, NSObject;
@protocol OS_dispatch_semaphore, HTSGLInput;

@interface IESCompositionInstruction : HTSFilterInterface <AVVideoCompositionInstruction>

@property (retain, nonatomic) IESMediaInfo *mediaInfo;
@property (retain, nonatomic) NSArray *inputInfos;
@property (retain, nonatomic) NSMutableDictionary *inputFilters;
@property (retain, nonatomic) id<HTSGLInput> outputFilter;
@property (retain, nonatomic) NSMutableArray *fillFilter;
@property (retain, nonatomic) HTSGLFilterTwoInput *mixFilter;
@property (retain, nonatomic) HTSGLFilterTwoInput *picMovieFilter;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (retain, nonatomic) HTSGLFilter *currentEffectTwoInputFilter;
@property (retain, nonatomic) IESMediaFilterInfo *currentEffectMediaFilterInfo;
@property (retain, nonatomic) NSMutableDictionary *currentEffectOneInputFilter;
@property (retain, nonatomic) NSArray *currentEffectTrackIDs;
@property (retain, nonatomic) HTSRawDataOutputRender *rawDataOutput;
@property (copy, nonatomic) id /* block */ easingFunction;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastFrameTime;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem_lock;
@property (nonatomic) int trackId;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fixOrientation:(id)a0;

- (id)buildFilter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)getPicKey:(id)a0 resourceID:(id)a1;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 inputInfos:(id)a1 mediaInfo:(id)a2 context:(id)a3;
- (void)buildFilters;
- (void)renderWith:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (id)buildInputFilter:(id)a0;
- (id)getDeleteTrackID:(id)a0 newTrackID:(id)a1;
- (id)getAddTrackID:(id)a0 newTrackID:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
