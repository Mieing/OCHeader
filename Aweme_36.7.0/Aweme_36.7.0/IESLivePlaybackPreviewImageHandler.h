@class HTSLiveEpisode, NSMutableDictionary, UIImage, NSString, NSMutableArray, TTVideoEngineThumbInfo;

@interface IESLivePlaybackPreviewImageHandler : NSObject <IESVSVideoPlayAction, IESLivePlaybackSeekAction>

@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (nonatomic) BOOL allCached;
@property (nonatomic) BOOL isPan;
@property (nonatomic) double playProgress;
@property (nonatomic) double duration;
@property (nonatomic) long long thumbImgIndex;
@property (retain, nonatomic) TTVideoEngineThumbInfo *thumbInfo;
@property (retain, nonatomic) NSMutableArray *loadingList;
@property (retain, nonatomic) NSMutableDictionary *reqDict;
@property (retain, nonatomic) UIImage *currentRenderImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onSeekStart;
- (void)onSeekEnd;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoProgressUpdate:(double)a0 duration:(double)a1;
- (id)loadModelWithUrl:(id)a0;
- (id)getThumbImgFromBigImage:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)loadThumbImageIfNeeded:(id)a0 isCache:(BOOL)a1;
- (void)cachePreviewImageIfNeed;
- (void)updatePreviewViewIfNeeded:(id)a0;
- (void)previewImageWithProgress:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
