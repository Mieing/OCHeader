@class NSString;
@protocol IESVSVideoPlayerRouter;

@interface IESLivePlaybackPaidStreamVideoAdapter : NSObject <IESVSVideoPlayAction>

@property (retain, nonatomic) id<IESVSVideoPlayerRouter> videoPlayer;
@property (copy, nonatomic) id /* block */ onVideoProgressUpdateBlock;
@property (copy, nonatomic) id /* block */ onVideoPlayBlock;
@property (copy, nonatomic) id /* block */ onVideoFinishBlock;
@property (copy, nonatomic) id /* block */ onVideoFrameChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (double)getCurrentPlaybackTime;
- (void)onVideoProgressUpdate:(double)a0 duration:(double)a1;
- (void)onVideoPlay;
- (void)onVideoFinish;
- (void)onVideoFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startInPlaybackForDistribute;
- (void)updatePlayTimeInPlaybackForDistribute:(double)a0;
- (void)finishInPlaybackForDistribute;
- (void).cxx_destruct;

@end
