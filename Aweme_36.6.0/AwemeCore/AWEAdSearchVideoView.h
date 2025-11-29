@class UIButton, NSString, AWEAwemeModel;
@protocol AWEAdSearchVideoViewToDetailProtocol, AWESearchVideoViewPlayerDelegate;

@interface AWEAdSearchVideoView : AWESearchVideoView <AWEAdSearchVideoViewProtocol> {
    id<AWESearchVideoViewPlayerDelegate> _delegate;
}

@property (retain, nonatomic) UIButton *videoActionButton;
@property (nonatomic) double lastClickTimestamp;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly, copy, nonatomic) NSString *adEventName;
@property (weak, nonatomic) id<AWEAdSearchVideoViewToDetailProtocol> adVideoDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)loopTimes;
- (double)currPlaybackTime;
- (void)configUI;
- (void)videoPlayerViewTapped:(id)a0;
- (void)switchVideoStatusByClick:(id)a0;
- (void)videoPlayerViewSingleTapped:(id)a0;
- (void)videoPlayerViewDoubleTapped:(id)a0;
- (void)playOrPause;
- (void)showPlayingUI;
- (void)showPauseUI;
- (id)videoDuration;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)handleLongPressGesture:(id)a0;
- (void)updateWithModel:(id)a0;
- (void)addAction;

@end
