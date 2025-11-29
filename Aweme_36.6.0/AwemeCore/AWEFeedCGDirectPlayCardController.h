@class NSString, AWEFeedCGDirectPlayPanelViewController;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedCGDirectPlayCardController : AWEBaseController <AWESpecialCardControllerProtocol, AWEFeedCGDirectPlayCardControllerDelegate>

@property (retain, nonatomic) AWEFeedCGDirectPlayPanelViewController *panelVC;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willRefresh;
- (void)cardWillDisplay:(id)a0 withAweme:(id)a1;
- (BOOL)shouldCancelInsertCard:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 willInsertForRowAtIndexPath:(id)a3;
- (void)cardDidInsert:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 forRowAtIndexPath:(id)a3;
- (void)cardFrequencyControl:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 type:(long long)a3;
- (void)cardDidReceive:(id)a0 withAweme:(id)a1 enterFrom:(id)a2;
- (id)trackParamsWithBusinessInfo:(id)a0;
- (id)panelViewControllerForModel:(id)a0;
- (void)removeCardIfNeeded:(id)a0;
- (void)trackEvent:(id)a0 withModel:(id)a1 params:(id)a2;
- (id)specialCardBussinessIdentifier;
- (void)trackFrequencyControlWithModel:(id)a0 reason:(id)a1;
- (void)dismissCardWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
