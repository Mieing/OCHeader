@class AWEIMMessage, AWEIMSmallCardPresenter, NSString, IESIMDisableCardPresenter;
@protocol AWEIMCommonInviteTableViewCellViewModelProtocol;

@interface AWEIMCommonInviteContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (readonly, nonatomic) AWEIMMessage *message;
@property (nonatomic) double cellShowTrackInterval;
@property (retain, nonatomic) IESIMDisableCardPresenter *disablePresenter;
@property (retain, nonatomic) AWEIMSmallCardPresenter *invitePresenter;
@property (retain, nonatomic) id<AWEIMCommonInviteTableViewCellViewModelProtocol> cellViewModel;
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
- (void)didTapCard;
- (void)p_createViewModel;
- (void)p_updateHiddenState;
- (void)p_updateLabelTexts;
- (void)p_updateBackgroundColor;
- (void)p_createCardPresenter;
- (void)p_createDisablePresenter;
- (void).cxx_destruct;
- (id)displayMessage;

@end
