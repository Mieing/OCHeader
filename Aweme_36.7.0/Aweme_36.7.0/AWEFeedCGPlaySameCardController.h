@class NSString;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedCGPlaySameCardController : AWEBaseController <AWESpecialCardControllerProtocol>

@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams:(id)a0;
- (void)cardDidInsert:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 forRowAtIndexPath:(id)a3;
- (void)cardDidDelete:(id)a0 withAweme:(id)a1;
- (void)cardFrequencyControl:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 type:(long long)a3;
- (void)cardDidReceive:(id)a0 withAweme:(id)a1 enterFrom:(id)a2;
- (void)lynxCardLoadResult:(long long)a0 error:(id)a1 aweme:(id)a2;
- (void)container:(id)a0 containerViewDidLoadFailedWithURL:(id)a1 error:(id)a2 aweme:(id)a3;
- (void)container:(id)a0 containerViewDidFinishLoadWithURL:(id)a1 aweme:(id)a2;
- (void)trackEvent:(id)a0 withModel:(id)a1 params:(id)a2;
- (void)traceEventStep:(id)a0 withModel:(id)a1 params:(id)a2;
- (id)lynxDynamicUrl:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
