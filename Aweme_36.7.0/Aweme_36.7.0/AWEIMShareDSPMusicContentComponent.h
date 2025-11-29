@class IESIMDisableCardPresenter, AWEIMShareDSPMusicContentPresenter, NSString;

@interface AWEIMShareDSPMusicContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) IESIMDisableCardPresenter *disablePresenter;
@property (retain, nonatomic) AWEIMShareDSPMusicContentPresenter *cardPresenter;
@property (nonatomic) BOOL isObserving;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_trackShow;
- (void)p_createPresenter;
- (void)p_removeNotificationObservation;
- (void)p_addNotificationObservation;
- (void)p_messagePlayStatusChangedNotified:(id)a0;
- (void)didTapCard;
- (void)p_updateHiddenState;
- (void)p_createCardPresenter;
- (void)p_createDisablePresenter;
- (void)p_refreshTheme;
- (void)p_refreshBackgroundImage;
- (void)didTapPlayButton;
- (void)p_updateBackgroundColorNew;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)dealloc;
- (id)message;

@end
