@class NSString, AFDButton, NSObject;
@protocol AFDSocialPromotionRedPacketManagerProtocol;

@interface AWEPlayInteractionPineappleRedPacketElement : AWEPlayInteractionLeftElement <AWEFriendsRedPacketMessage>

@property (retain, nonatomic) AFDButton *redPacketButton;
@property (retain, nonatomic) NSObject<AFDSocialPromotionRedPacketManagerProtocol> *socialRedPacketManager;
@property (nonatomic) BOOL hasTrackedShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_buttonIconImage;

- (void)videoDidActivity;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillDisappear;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)redPacketStatusUpdatedOnAwemeID:(id)a0 status:(unsigned long long)a1;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)p_updateRedPacketButtonWithStatus:(unsigned long long)a0;
- (void)p_trackEvent:(id)a0;
- (id)p_openRedPacketTrackParams;
- (id)p_buttonTextFont;
- (void)p_didTapRedPacketButton;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (id)context;

@end
