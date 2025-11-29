@class NSArray, DVETrackPanelContext, NSDictionary;
@protocol AEKMegaEditor;

@interface ACCAEVideoThumbPreviewViewModel : NSObject

@property (retain, nonatomic) DVETrackPanelContext *context;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (retain, nonatomic) NSArray *durationCache;
@property (copy, nonatomic) NSArray *clipViewModels;
@property (retain, nonatomic) NSDictionary *coverFrameTimeMap;

- (id)initWithContext:(id)a0 megaEditor:(id)a1;
- (void)updateOnFilterChanged;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })totalDurationToClipAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)mainVideoTrack;

@end
