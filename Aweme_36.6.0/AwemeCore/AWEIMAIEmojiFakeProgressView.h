@class NSTimer, UILabel, UIView, AWEIMAIEmojiFakeProgressViewConfig;
@protocol IESIMParticleLoadingProtocol;

@interface AWEIMAIEmojiFakeProgressView : UIView

@property (nonatomic) double progress;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIView<IESIMParticleLoadingProtocol> *particleView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) AWEIMAIEmojiFakeProgressViewConfig *config;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)startFakeProgress;
- (void)endFakeProgress;
- (void)p_updateProgress;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
