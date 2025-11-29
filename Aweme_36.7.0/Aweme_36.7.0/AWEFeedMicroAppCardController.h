@class NSString, NSMutableDictionary;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedMicroAppCardController : AWEBaseController <AWEUserMessage, AWEFeedControllerProtocol, AWESpecialCardControllerProtocol>

@property (nonatomic) BOOL abilityEnable;
@property (nonatomic) unsigned long long cardType;
@property (nonatomic) unsigned long long currentFetchCount;
@property (nonatomic) unsigned long long insertFetchPosition;
@property (nonatomic) unsigned long long insertPlayPosition;
@property (retain, nonatomic) NSMutableDictionary *cardInfo;
@property (nonatomic) BOOL isCardDisplaying;
@property (nonatomic) double appearTime;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *clickType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)cardWillDisplay:(id)a0 withAweme:(id)a1;
- (void)cardDidEndDisplaying:(id)a0 withAweme:(id)a1;
- (void)cardDidAppear:(id)a0 withAweme:(id)a1;
- (void)cardDidDisappear:(id)a0 withAweme:(id)a1;
- (id)cardClientData:(id)a0;
- (void)cardTemplateButtonClickWithParams:(id)a0;
- (void)setUpObserver;
- (void)cardDisplayBegin;
- (void)cardDisplayEnd;
- (void)cardDisplayResume;
- (void)cardDisplayStop;
- (void)setUp;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)isLogin;

@end
