@class UIView, UIFont, NSString, UITextView, UIImageView, UIButton, AWEIMMessage, AWEIMGradientView, LOTAnimationView, UILabel, AWEIMLiveGroupAnnouncementLiveStatusResponse;
@protocol IESIMMultiAvatarViewProtocol;

@interface AWEIMLiveGroupAnnoucementMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEIMGradientBubbleProtocol>

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView<IESIMMultiAvatarViewProtocol> *multiAvatarView;
@property (retain, nonatomic) UILabel *subscribedNumberLabel;
@property (retain, nonatomic) UIButton *subscribeBtn;
@property (retain, nonatomic) UITextView *expiredStatusView;
@property (retain, nonatomic) UIView *livingStatusView;
@property (retain, nonatomic) UIImageView *livingAvatarView;
@property (retain, nonatomic) AWEIMGradientView *livingContainerView;
@property (retain, nonatomic) LOTAnimationView *livingAinmationView;
@property (retain, nonatomic) UILabel *livingLabel;
@property (nonatomic) long long roomId;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementLiveStatusResponse *displayingStatusResponse;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) long long announcementId;
@property (retain, nonatomic) UIFont *textFont;
@property (readonly, nonatomic) AWEIMMessage *message;
@property (readonly, nonatomic) UIView *gradientBubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (void)__trackShowData;
- (void)__updateBubbleLayer;
- (void)__resetStatus;
- (void)__handleDidUpdateSubscribeStatusNty:(id)a0;
- (BOOL)__shouldFetchStatusWithScheduleTimeInLongLong:(long long)a0;
- (void)__updateWithStatus:(unsigned long long)a0 subscribeInfo:(id)a1 roomId:(long long)a2;
- (void)__updateColorsWithStatus:(unsigned long long)a0;
- (BOOL)__hasFetchedInThisConversation;
- (void)__fetchMessageLiveStatusWithMessage:(id)a0 iesMsg:(id)a1;
- (id)__displaySubscribeListFromFullSubscribeList:(id)a0;
- (void)__changeSubscribStatusTo:(BOOL)a0;
- (BOOL)__shouldDisableInteraction;
- (void)__updateDisplayingResponseToAlreadySubscribed;
- (void)__trackLiveAnnouncementMessageEvent:(id)a0;
- (void)__updateDisplayingResponseToCanSubscribe;
- (void)__updateStatusAccordingToDisplayingResponse;
- (void)__transferToLive;
- (void)updateSubscribeButtonWithHasSubscribe:(BOOL)a0 announcementId:(long long)a1;
- (id)__showTypeForTracking;
- (void)__didTapOnBubble;
- (void)__didTapOnSubscribeBtn;
- (id)bubbleShapeView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)__interactor;
- (void)setupUI;
- (void)willDisplayCell;
- (id)bubbleLayer;

@end
