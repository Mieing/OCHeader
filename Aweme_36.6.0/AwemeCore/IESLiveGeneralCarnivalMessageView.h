@class HTSEventContext, NSString, CALayer, HTSLiveGeneralCarnivalMessage, UIButton, IESLiveGCDTimer, IESLiveAnimatedImageView, HTSLiveAmazingBackgroundView, IESLivePSComponentConfigModel, UILabel;

@interface IESLiveGeneralCarnivalMessageView : UIView <IESLiveMessageInteractionModuleDanmakuAction, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) HTSLiveAmazingBackgroundView *bgGradientView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *effectBgImageView;
@property (retain, nonatomic) CALayer *effectBgMaskLayer;
@property (retain, nonatomic) IESLiveAnimatedImageView *carnivalLeadingIcon;
@property (retain, nonatomic) UIButton *schemaJumpButton;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *borderLayer;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) HTSLiveGeneralCarnivalMessage *message;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (nonatomic) double idleTimeInterval;
@property (nonatomic) double warmTimeInterval;
@property (nonatomic) double celebratingTimeInterval;
@property (nonatomic) double exitTimeInterval;
@property (retain, nonatomic) IESLiveGCDTimer *warmTimer;
@property (retain, nonatomic) IESLiveGCDTimer *exitTimer;
@property (nonatomic) BOOL specialContentShow;
@property (nonatomic) BOOL shouldUseSpecialContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)didSetAttachingDIContext;
- (void)appDidActive;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)handleAssembleBusiness:(id)a0;
- (void)publicScreenComponentProduced;
- (void)didReceivedMattingContourInfo;
- (void)showSpecialContentOnCelebrating:(BOOL)a0;
- (BOOL)enableShowArrow;
- (void)actionSchemaJump;
- (void)showLeadingLoadIcon;
- (double)fetchRealRestTime;
- (void)refreshCountDownResetTime:(long long)a0;
- (void)handleAssembleBusinessWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (void)setup;
- (void)setupUI;

@end
