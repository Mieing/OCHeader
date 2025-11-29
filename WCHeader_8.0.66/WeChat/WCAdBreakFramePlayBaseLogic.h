@class WCDataItem, WCAdBreakFrameInfo, NSString, WCAdAlphaVideoView;

@interface WCAdBreakFramePlayBaseLogic : MMObject <WCAdAlphaVideoViewDelegate>

@property (readonly, nonatomic) WCAdBreakFrameInfo *adBreakFrameInfo;
@property (readonly, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) WCAdAlphaVideoView *alphaVideoView;
@property (readonly, nonatomic) BOOL bTimelineScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBreakFrameInfo:(id)a0 dataItem:(id)a1 alphaVideoView:(id)a2 bTimelineScene:(BOOL)a3;
- (BOOL)checkPlayMode;
- (void)reset;
- (void)startAlphaVideoPlayIfNeed;
- (void)pauseAlphaVideoPlayIfNeed;
- (void)onReferenceVideoPlaybackTimeUpdate:(double)a0 isPlaying:(BOOL)a1;
- (void)onSelfLike;
- (void)onSelfCancelLike;
- (void)onSelfComment;
- (id)fetchVideoPlayInfo;
- (id)fetchBreakFrameReportInfo;
- (void).cxx_destruct;

@end
