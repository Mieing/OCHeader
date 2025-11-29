@class WCCanvasComponent, WCCanvasComponentRedEnvelopSubCardInfo, UIImageView, UIButton, WCAdURLImageView, WCCanvasComponentRedEnvelopInfo, WCAdvertiseInfo, UILabel, WCCanvasRedEnvelopComponentAvatarView;
@protocol WCCanvasRedEnvelopComponentCardDelegate, WCCanvasComponentDelegate;

@interface WCCanvasRedEnvelopComponentCardView : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *headlineView;
@property (retain, nonatomic) WCCanvasRedEnvelopComponentAvatarView *avatarView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *descView;
@property (retain, nonatomic) WCAdURLImageView *redEnvelopView;
@property (retain, nonatomic) WCCanvasComponent *redEnvelopVideoView;
@property (retain, nonatomic) UILabel *redEnvelopBottomDescView;
@property (retain, nonatomic) UIImageView *redEnvelopBottomImageView;
@property (retain, nonatomic) UIButton *actionBtn;
@property (retain, nonatomic) WCCanvasComponent *shareComponent;
@property (weak, nonatomic) id<WCCanvasRedEnvelopComponentCardDelegate> delegate;
@property (retain, nonatomic) WCAdvertiseInfo *advertiseInfo;
@property (nonatomic) long long orientation;
@property (weak, nonatomic) id<WCCanvasComponentDelegate> canvasDelegate;
@property (nonatomic) int baseType;
@property (retain, nonatomic) WCCanvasComponentRedEnvelopInfo *baseCardInfo;
@property (retain, nonatomic) WCCanvasComponentRedEnvelopSubCardInfo *subCardInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 advertiseInfo:(id)a1 orientation:(long long)a2 delegate:(id)a3 canvasDelegate:(id)a4 baseType:(int)a5 baseCardInfo:(id)a6 subCardInfo:(id)a7;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onActionButtonClicked;
- (void)setShadowToView;
- (void)removeShadowFromView;
- (void)updateCardViewWithStatus:(unsigned int)a0 opType:(unsigned int)a1;
- (id)generateSimpleLabelWithFont:(id)a0 textColor:(id)a1 text:(id)a2;
- (int)componentCardSubtype;
- (void)cardDidFullyAppearInMainScreen:(BOOL)a0;
- (void)cardWillAppearInMainScreen:(BOOL)a0;
- (void)cardWillDisappearInMainScreen:(BOOL)a0;
- (void)cardAppearFactorChagneInMainScreen;
- (void)cardDidEnterBackground;
- (void)cardWillEnterForeground;
- (void)cardWillResumeState:(BOOL)a0;
- (void)cardWillStopState:(BOOL)a0;
- (void)canvasCloseBtnClick;
- (void)cardReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)a0;
- (void)encoreShakeResetSpecialView;
- (void).cxx_destruct;

@end
