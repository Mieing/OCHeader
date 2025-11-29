@class CAGradientLayer, CALayer, UIImageView, NSString, IESECShopExtensionAreaDragDownView, UIView, IESECStorePageContext;
@protocol IESECAwemeVideoViewProtocol;

@interface IESECStoreVideoView : IESECShopMonitorActionView <IESECAwemeVideoViewDelegate>

@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (retain, nonatomic) UIView<IESECAwemeVideoViewProtocol> *playerView;
@property (retain, nonatomic) IESECShopExtensionAreaDragDownView *dragDownView;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) CAGradientLayer *whiteTransitionLayer;
@property (retain, nonatomic) CALayer *pureWhiteLayer;
@property (retain, nonatomic) UIImageView *playerMuteImageView;
@property (nonatomic) double liveInfoBottomOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoView:(id)a0 didChangePlayState:(unsigned long long)a1;
- (void)didTapMute;
- (void)updateVideoInfos:(id)a0 pageContext:(id)a1;
- (void)showGradientLayer:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
