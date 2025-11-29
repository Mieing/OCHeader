@class UIView, MMUIButton, UILabel, UIImageView, VoiceRecordTextureButtonView, MMFinderLiveTaskId, WCLiveBottomTextButton, MMUIActivityIndicatorView;
@protocol MMFinderLiveMicTalkingOperationViewActionDelegate;

@interface MMFinderLiveMicTalkingOperationView : UIView

@property (retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId;
@property (retain, nonatomic) WCLiveBottomTextButton *closeButton;
@property (retain, nonatomic) UIView *pressTalkButtonBackgroundView;
@property (retain, nonatomic) MMUIButton *pressTalkButton;
@property (nonatomic) BOOL isPressingTalkButton;
@property (retain, nonatomic) UIView *recordContainerView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) VoiceRecordTextureButtonView *voiceRecordView;
@property (retain, nonatomic) MMUIActivityIndicatorView *talkLoadingView;
@property (retain, nonatomic) UIImageView *talkingImageView;
@property (retain, nonatomic) UILabel *talkTipLabel;
@property (nonatomic) unsigned long long lastUpdateVolumeTime;
@property (weak, nonatomic) id<MMFinderLiveMicTalkingOperationViewActionDelegate> actionDelegate;
@property (nonatomic) unsigned long long talkState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1;
- (id)initWithTaskId:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCloseButton;
- (void)layoutPressTalkButton;
- (void)layoutRecordViews;
- (void)onCloseButtonClicked;
- (void)onTalkButtonTouchDown;
- (void)onTalkButtonTouchUp;
- (void)updateTalkViewsAppearance;
- (void)cancelTalk;
- (void)updateTalkingVolume:(unsigned long long)a0;
- (void).cxx_destruct;

@end
