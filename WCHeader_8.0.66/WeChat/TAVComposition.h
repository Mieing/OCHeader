@class CIColor, NSArray;
@protocol TAVVideoComposition, TAVVideoCompositionMixer;

@interface TAVComposition : NSObject

@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (retain, nonatomic) CIColor *backgroundColor;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property (nonatomic) BOOL cacheDecodedFrameAsEmptyFrame;
@property (copy, nonatomic) NSArray *videoChannels;
@property (copy, nonatomic) NSArray *audioChannels;
@property (retain, nonatomic) NSArray *overlays;
@property (retain, nonatomic) NSArray *audios;
@property (retain, nonatomic) id<TAVVideoComposition> videoComposition;
@property (retain, nonatomic) id<TAVVideoCompositionMixer> videoCompositionMixer;

+ (void)reloadVideoStartTimeWithProviders:(id)a0;
+ (void)reloadAudioStartTimeWithProviders:(id)a0;
+ (void)reloadStartTimeWithProviders:(id)a0 transitionTime:(id /* block */)a1;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })getTotalDuration;
- (id)init;
- (void).cxx_destruct;

@end
