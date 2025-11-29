@class CAGradientLayer, IESGCPCGLoadProgressView, UIImageView, IESGCPTimer, UIView, UILabel, NSString;

@interface IESGCPCGLoadingView : UIView <IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *backgroundGreyView;
@property (retain, nonatomic) CAGradientLayer *backgroundGreyViewLayer;
@property (retain, nonatomic) UIImageView *gameIconView;
@property (retain, nonatomic) UILabel *gameNameLabel;
@property (retain, nonatomic) IESGCPCGLoadProgressView *loadProgressView;
@property (retain, nonatomic) IESGCPTimer *autoIncrementTimer;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL backgroundImageHasSet;
@property (readonly, nonatomic) double currentProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)updateBackgroundImage:(id)a0;
- (void)updateOrientationStatus:(long long)a0;
- (void)stopLoadingProgress;
- (void)updateGameIcon:(id)a0 gameName:(id)a1;
- (void)startProgressAutoIncrement;
- (void)setBackgroundImageMaskHidden:(BOOL)a0;
- (void)_hideGameInfo:(BOOL)a0;
- (void)stopProgressAutoIncrement;
- (void)_onProgressDidAutoIncreased;
- (id)_backgroundPlaceholderUrl;
- (void).cxx_destruct;
- (id)init;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (void)updateProgress:(double)a0;

@end
