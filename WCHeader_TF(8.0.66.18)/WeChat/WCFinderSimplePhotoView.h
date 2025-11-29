@class MMTimer, NSString, WCPlayableImageView, WCFinderFeedMediaWrap;
@protocol WCFinderSimplePhotoViewDelegate;

@interface WCFinderSimplePhotoView : MMUIView <WCPlayableImageViewDelegate>

@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (retain, nonatomic) WCPlayableImageView *playableImageView;
@property (nonatomic) double progressValue;
@property (retain, nonatomic) MMTimer *staticPhotoTimer;
@property (weak, nonatomic) id<WCFinderSimplePhotoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithMediaInfo:(id)a0;
- (void)reCreatePlayableImageView;
- (void)startPlayPhoto;
- (void)pausePlayPhoto;
- (void)prepareForReuse;
- (void)_cancelImageLoad;
- (void)_clearPlayableImageView;
- (void)_startOrResumeTimer;
- (void)_startTimmer;
- (void)_resumeTimer;
- (void)_pauseTimer;
- (void)_stopTimer;
- (void)onTimerTrick;
- (void)_handleDownloadImageSuccess:(id)a0;
- (void)_handleDownloadImageFailed:(id)a0;
- (void)playableImageView:(id)a0 updateVideoCurrentTime:(double)a1 videoDuration:(double)a2;
- (void)playableImageViewDidPlayToEnd:(id)a0;
- (void).cxx_destruct;

@end
