@class UIView, IESLiveFlexBackgroundImageView, NSString, HTSLiveArtTextLabel, HTSLiveMatchHotMessage, IESLiveCountTimer, HTSEventContext, IESLiveMessageTrayConfrontModel, IESLiveAnimatedImageView, IESLivePSComponentConfigModel, UILabel;

@interface IESLiveMessageTrayConfrontView : UIView <CAAnimationDelegate, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) UIView *containerLeft;
@property (retain, nonatomic) UIView *containerAnimationLeft;
@property (retain, nonatomic) IESLiveAnimatedImageView *iconLeft;
@property (retain, nonatomic) IESLiveFlexBackgroundImageView *trayLeft;
@property (retain, nonatomic) UILabel *labelLeft;
@property (retain, nonatomic) UIView *comboContainerAnimationLeft;
@property (retain, nonatomic) HTSLiveArtTextLabel *xLabelLeft;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboNumberLabelLeft;
@property (retain, nonatomic) UIView *containerAnimationRight;
@property (retain, nonatomic) IESLiveAnimatedImageView *iconRight;
@property (retain, nonatomic) IESLiveFlexBackgroundImageView *trayRight;
@property (retain, nonatomic) UILabel *labelRight;
@property (retain, nonatomic) UIView *comboContainerAnimationRight;
@property (retain, nonatomic) HTSLiveArtTextLabel *xLabelRight;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboNumberLabelRight;
@property (retain, nonatomic) HTSLiveMatchHotMessage *currentMainMessage;
@property (retain, nonatomic) HTSLiveMatchHotMessage *currentGuestMessage;
@property (nonatomic) int lastWiner;
@property (retain, nonatomic) IESLiveMessageTrayConfrontModel *model;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) BOOL needShowIcon;
@property (nonatomic) BOOL firstMainWin;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)setupLeftContainer;
- (void)setupRightContainer;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)publicScreenComponentProduced;
- (void)trackOnShow:(id)a0;
- (void)startEnterAnimation;
- (void)trackOnDismiss;
- (void)updateWithFirstModel;
- (double)leftTrayWidth;
- (double)rightTrayWidth;
- (id)createGroupChangeAnimationFromValue:(double)a0 toValue:(double)a1;
- (id)createComboScaleAnimation;
- (id)confrontIconAtIndex:(unsigned long long)a0;
- (id)flexSettingLeft;
- (id)flexSettingRight;
- (void)updateViewWithModels;
- (void)comboLeftAnimationWithNum:(long long)a0;
- (void)comboRightAnimationWithNum:(long long)a0;
- (void)checkUpdateChangeWinerGroup:(int)a0;
- (void)trackOnDismiss:(id)a0;
- (void)startConfrontAnimationEnterV2;
- (void)startIconAppearAnimation;
- (void)startConfrontAnimationRepeatIsOnce:(BOOL)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)dealloc;

@end
