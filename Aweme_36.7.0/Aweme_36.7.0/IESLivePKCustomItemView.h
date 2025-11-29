@class NSString, UIImageView, HTSLiveImage, UILabel, IESLiveAnimatedImageView, HTSLiveRoom;

@interface IESLivePKCustomItemView : UIView

@property (retain, nonatomic) UIImageView *pkIconImageView;
@property (retain, nonatomic) HTSLiveImage *pkIconImage;
@property (retain, nonatomic) UIImageView *pkIconMaskImageView;
@property (retain, nonatomic) UIImageView *animationBgView;
@property (retain, nonatomic) UIImageView *lightningImageView;
@property (retain, nonatomic) UIImageView *loopImageView;
@property (retain, nonatomic) UIImageView *oppositeAnchorAvatarView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *speedTimeLabel;
@property (copy, nonatomic) NSString *animationWebpStr;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) IESLiveAnimatedImageView *animationView;
@property (retain, nonatomic) UILabel *bottomTitleLbl;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (copy, nonatomic) NSString *configurationPKBottomTitle;
@property (nonatomic) int lastPKBottomType;
@property (nonatomic) int currentPKBottomType;
@property (copy, nonatomic) NSString *lastLeadPKKey;
@property (nonatomic) BOOL enableDynamicShowPKButton;
@property (nonatomic) BOOL gapCutPKButtonAlpha;
@property (retain, nonatomic) IESLiveAnimatedImageView *pkIconAnimatedImageView;
@property (copy, nonatomic) id /* block */ didClickItem;

- (void)bindAction;
- (void)renderStatus:(unsigned long long)a0;
- (void)p_animateWithResourceName:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 DIContext:(id)a1;
- (void)hideRedDot:(BOOL)a0;
- (void)updatePKItemWithAutoMatchRemianTime:(long long)a0;
- (void)updatePKItemRotationAnimationWithRemianTime:(long long)a0;
- (void)performClickAction;
- (void)runSpinAnimationOnView:(id)a0 duration:(double)a1 amount:(double)a2;
- (void)p_animationOfTimeLabel;
- (void)automatchTimeOut;
- (void)setConfigurationPkIconImage;
- (void)updatePKIconAnimation;
- (void)removePkIconAnimationView;
- (int)showPKBottomIconType;
- (void)showPKIconAnim:(id)a0 duration:(double)a1;
- (void)showPkBubble:(int)a0 duration:(double)a1;
- (void)trackInteractIconChangeFlashShow:(id)a0;
- (void)renderOppositeUserIfNeed:(id)a0;
- (void)showOppositeAnchorAvatarAbove:(id)a0;
- (void)removeOppositeAnchorAvatarAboveIfNeeded;
- (void).cxx_destruct;
- (void)loadViews;

@end
