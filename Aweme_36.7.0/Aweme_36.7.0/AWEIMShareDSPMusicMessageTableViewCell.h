@class NSString, AWEIMDSPMusicCardView, AWEIMDSPMusicDisabledCardView, UIView;

@interface AWEIMShareDSPMusicMessageTableViewCell : AWEIMUserMessageTableViewCell <IESIMMessageAvailableStatusProtocol>

@property (retain, nonatomic) UIView *cardContainer;
@property (retain, nonatomic) AWEIMDSPMusicDisabledCardView *unavailableCard;
@property (retain, nonatomic) AWEIMDSPMusicCardView *contentCard;
@property (retain, nonatomic) NSString *musicCoverRequestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (BOOL)canDoubleTapToLike;
- (void)updateUnavailableUIWhenUnavailableStateChanged;
- (void)p_playButtonTapAction;
- (void)handleMessageTap:(id)a0;
- (void)p_configWithMessage:(id)a0 animateUnavailable:(BOOL)a1;
- (void)p_removeNotificationObservation;
- (void)p_addNotificationObservation;
- (void)p_messagePlayStatusChangedNotified:(id)a0;
- (void)changeUIForAvailableStatus;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)prepareForReuse;
- (id)menuItems;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
