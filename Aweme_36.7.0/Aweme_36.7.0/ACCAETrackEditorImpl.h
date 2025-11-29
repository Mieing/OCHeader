@class NSString;
@protocol AEKMegaEditor, IESServiceProvider;

@interface ACCAETrackEditorImpl : NSObject <ACCAETrackEditor>

@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trimTrack:(id)a0 targetStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)trimTrack:(id)a0 targetEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)trimTrack:(id)a0 targetStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 targetEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)trimTextRead:(id)a0 targetStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 targetEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)renderTimeOperatorWithSlot:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
