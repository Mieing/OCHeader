@class AWEIMGroupInviteBubbleMessage, NSString;

@interface AWEIMGroupInviteBubbleContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (readonly, nonatomic) AWEIMGroupInviteBubbleMessage *message;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (id)__titleLabelText;
- (void)didTapCard;
- (id)__subtitleLabelText;
- (id)displayMessage;

@end
