@class NSMutableDictionary, AWELiveElementConfig, NSString, AWELivePreStreamConfigCenter, AWELiveElementPriorityManager;
@protocol AWELivePreStreamBizStatusService;

@interface AWELivePreStreamBottomContainer : AWELiveBaseElementContainer <AWELiveElementContainerProtocol>

@property (retain, nonatomic) NSMutableDictionary *alphaTokenDic;
@property (retain, nonatomic) AWELiveElementPriorityManager *priorityManager;
@property (retain, nonatomic) AWELiveElementConfig *elementConfig;
@property (retain, nonatomic) AWELivePreStreamConfigCenter *configCenter;
@property (weak, nonatomic) id<AWELivePreStreamBizStatusService> bizStatusService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)attachElement:(id)a0;
- (void)setupElementPriorityManager;
- (void)updateContainerViewAlpha;
- (void)setupBottomContainer;
- (void)setContainerViewAlpha:(double)a0 token:(id)a1;
- (void)clearAlphaTokenDic;
- (void).cxx_destruct;
- (void)removeElement:(id)a0;
- (id)containerView;

@end
