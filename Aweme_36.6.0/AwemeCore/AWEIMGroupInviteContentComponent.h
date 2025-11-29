@class AWEIMGroupInviteMessage, AWEIMUserViewModel, NSString;

@interface AWEIMGroupInviteContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (readonly, nonatomic) AWEIMGroupInviteMessage *message;
@property (retain, nonatomic) AWEIMUserViewModel *inviterUserVM;
@property (nonatomic) double cellShowTrackInterval;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (id)sceneTypeStringForScene:(long long)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (void)p_setupBind;
- (id)__titleLabelText;
- (void)didTapCard;
- (id)__subtitleLabelText;
- (id)p_makeSubtitleLabelText;
- (void)__trackEventWithShowCard;
- (void)__trackInviteCardClick;
- (void)__trackGroupChatClickInvite;
- (id)schemaForOpenConWithConID:(id)a0 enterFrom:(id)a1 joinSourceType:(id)a2;
- (void).cxx_destruct;
- (id)displayMessage;

@end
