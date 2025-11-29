@class WCAdAlphaVideoView, WCDataItem, MMUIButton, UIView, WCAdBreakFramePlayBaseLogic, WCAdCardEmitterView, WCAdURLImageView, WCAdBreakFrameInfo, SightIconView;
@protocol WCAdBreakFrameViewDelegate;

@interface WCAdBreakFrameView : MMUIView

@property (retain, nonatomic) WCAdBreakFrameInfo *adBreakFrameInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) BOOL bTimelineScene;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaFrame;
@property (retain, nonatomic) WCAdAlphaVideoView *alphaVideoView;
@property (retain, nonatomic) WCAdURLImageView *coverImageView;
@property (retain, nonatomic) SightIconView *downloadProgressView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clickViewFrame;
@property (retain, nonatomic) MMUIButton *clickView;
@property (retain, nonatomic) WCAdBreakFramePlayBaseLogic *playLogic;
@property (retain, nonatomic) WCAdCardEmitterView *emitterView;
@property (nonatomic) BOOL canAddEmitter;
@property (readonly, nonatomic) UIView *playerControlViewContainer;
@property (weak, nonatomic) id<WCAdBreakFrameViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adBreakFrameInfo:(id)a1 dataItem:(id)a2 bTimelineScene:(BOOL)a3 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)startAlphaVideoPlayIfNeed;
- (void)pauseAlphaVideoPlayIfNeed;
- (void)onReferenceVideoPlaybackTimeUpdate:(double)a0 isPlaying:(BOOL)a1;
- (void)onPlaybackTimeUpdate:(double)a0;
- (void)onPlayEnd:(BOOL)a0;
- (void)resetVideoPlayer;
- (BOOL)isVideoDataAvailable;
- (void)downloadVideo;
- (id)fetchVideoMediaId;
- (void)initMediaView;
- (id)createAlphaVideoView;
- (void)initPlayerControlViewContainer;
- (void)initPlayerControl;
- (void)initClickView;
- (void)initCoverImageView;
- (void)initDownloadProgressView;
- (void)calcMediaFrame;
- (void)calcClickViewFrame;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)checkAreaCanClick:(struct CGPoint { double x0; double x1; })a0;
- (void)onClickAreaClick:(id)a0 forEvent:(id)a1;
- (void)reportVideoCompositeType;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)shouldDeleteBreakFrameViewWhileCellEndDisplaying;
- (void)appendEmitterByGesture:(id)a0;
- (void)endEmitters;
- (void)onCommentSend:(id)a0 comment:(id)a1;
- (void)onDataItem:(id)a0 likeFlagChanged:(BOOL)a1;
- (void).cxx_destruct;

@end
