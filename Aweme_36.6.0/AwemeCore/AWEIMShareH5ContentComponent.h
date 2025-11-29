@class NSString;

@interface AWEIMShareH5ContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) BOOL isDSInstalled;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)isDSInstalled;
+ (void)p_configProps:(id)a0 withMessage:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (void)p_trackH5ShareFromFeedAnchorIfNeeded:(id)a0;
- (void)trackH5ShareEventForName:(id)a0;
- (void)trackEcomH5MsgClick;
- (void)p_trackH5ShareEventForName:(id)a0;
- (void)trackWillDisplayCell;
- (void)p_didTapCard;
- (id)shareH5Message;
- (void)trackAIInteractionMessageShow:(id)a0;
- (void)trackSendGiftCardClick;
- (void)trackAIInteractionMessageClick:(id)a0;
- (void)refreshInstalledStatus;
- (id)displayMessage;

@end
