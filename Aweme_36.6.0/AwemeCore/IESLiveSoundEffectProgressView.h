@class IESLiveEffectProgressView, UIImageView;

@interface IESLiveSoundEffectProgressView : UIView

@property (retain, nonatomic) IESLiveEffectProgressView *loadingView;
@property (retain, nonatomic) UIImageView *downloadView;

- (void)setNeedDownload;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)setProgress:(double)a0;

@end
