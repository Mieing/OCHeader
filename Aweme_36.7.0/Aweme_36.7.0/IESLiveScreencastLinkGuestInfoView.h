@class UIButton, RACCompoundDisposable, UIImageView, NSString, UILabel, IESLiveScreencastLinkAvatarView, IESLiveScreencastLinkAvatarViewConfig;
@protocol IESLiveInteractUserModel;

@interface IESLiveScreencastLinkGuestInfoView : UIView <HTSGuestInfoRenderer, HTSLivePluginLayoutView>

@property (nonatomic) double smallViewWidth;
@property (retain, nonatomic) IESLiveScreencastLinkAvatarViewConfig *avatarConfig;
@property (retain, nonatomic) IESLiveScreencastLinkAvatarView *avatarContainer;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIButton *muteButton;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (copy, nonatomic) id /* block */ onClickMuteButton;
@property (nonatomic) BOOL mute;
@property (readonly, nonatomic) id<IESLiveInteractUserModel> guest;
@property (copy, nonatomic) id /* block */ onUserViewClicked;
@property (nonatomic) BOOL needShowIncomePrompt;
@property (nonatomic) BOOL disableSilence;
@property (nonatomic) BOOL disableEmoji;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)didTapInfoView;
- (id)initWithIsAnchor:(BOOL)a0;
- (void)updateSoundAnimationDidChangeWithSpeakingImageList:(id)a0;
- (void)updateWithGuest:(id)a0;
- (void)updateSoundAnimationWithStartURLs:(id)a0 loopURLs:(id)a1;
- (void)p_disposable;
- (void)didClickMuteButton:(id)a0;
- (void)updateFanticketAreaHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)viewType;
- (void)dealloc;
- (void)setupSubviews;

@end
