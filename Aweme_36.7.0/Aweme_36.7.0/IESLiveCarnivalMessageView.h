@class NSTimer, NSString, HTSLiveChatCarnivalMessage, HTSEventContext, CALayer, UIButton, IESLiveAnimatedImageView, HTSLiveAmazingBackgroundView, IESLivePSComponentConfigModel, UILabel;

@interface IESLiveCarnivalMessageView : UIView <IESLiveMessageInteractionModuleDanmakuAction, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) HTSLiveAmazingBackgroundView *bgGradientView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *loadingImageView;
@property (retain, nonatomic) IESLiveAnimatedImageView *effectBgImageView;
@property (retain, nonatomic) CALayer *effectBgMaskLayer;
@property (retain, nonatomic) IESLiveAnimatedImageView *carnivalLeadingIcon;
@property (retain, nonatomic) UIButton *effectClearButton;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *borderLayer;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) HTSLiveChatCarnivalMessage *message;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (retain, nonatomic) NSTimer *warmTimer;
@property (nonatomic) double warmTimeInterval;
@property (nonatomic) double celebratingTimeInterval;
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
- (void)publicScreenComponentProduced;
- (void)didReceivedMattingContourInfo;
- (void)actionClearButton;
- (void)showTipForLandscape;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (void)setup;
- (void)setupUI;

@end
