@class UIImage, MMovieDecoder, NSString;
@protocol MVideoPlayerViewDelegate;

@interface MVideoPlayerView : UIImageView <MMovieDecoderDelegate>

@property (retain, nonatomic) MMovieDecoder *decoder;
@property (retain, nonatomic) UIImage *firstFrame;
@property (retain, nonatomic) NSString *url;
@property (weak, nonatomic) id<MVideoPlayerViewDelegate> delegate;
@property (retain, nonatomic) UIImage *lastFrame;
@property (nonatomic) BOOL autoRepeat;
@property (copy, nonatomic) id /* block */ didTouchInsideBlock;
@property (retain, nonatomic) NSString *cpKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)loadAndPlay:(id)a0;
- (void)pause;
- (void)pauseForRelease;
- (void)restart;
- (void)mMovieDecoderOnDecodeFinished:(id)a0;
- (void)mMovieDecoder:(id)a0 onNewVideoFrameReady:(struct opaqueCMSampleBuffer { } *)a1;
- (void)onTapped;
- (void).cxx_destruct;

@end
