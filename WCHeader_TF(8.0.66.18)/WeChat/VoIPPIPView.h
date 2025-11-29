@class NSString, VoIPPIPRenderView, UIImageView, UIView, UILabel;

@interface VoIPPIPView : UIView <VoIPCanvasPlugin, VoIPAudioServiceExtension>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VoIPPIPRenderView *renderView;
@property (retain, nonatomic) UIImageView *localAvatarView;
@property (retain, nonatomic) UIImageView *remoteAvatarView;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UILabel *waitForConnectingLabel;
@property (nonatomic) BOOL isWaitForConnectingLabelHidden;

- (void)canvasWillRender:(id)a0;
- (void)canvas:(id)a0 didRenderWithIsSucceed:(BOOL)a1;
- (unsigned long long)timesForCustomizingRenderCommandEncoderForCanvas:(id)a0;
- (void)canvas:(id)a0 customizeRenderCommandEncoder:(id)a1 withIndex:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isNormal;
- (void)dealloc;
- (void)drawPixelBufferRef:(struct __CVBuffer { } *)a0;
- (void)setLocalAvatarImage:(id)a0;
- (void)setRemoteAvatarImage:(id)a0;
- (void)setLocalAvatarHidden:(BOOL)a0;
- (void)setRemoteAvatarHidden:(BOOL)a0;
- (void)layoutSubviews;
- (void)clear;
- (void).cxx_destruct;

@end
