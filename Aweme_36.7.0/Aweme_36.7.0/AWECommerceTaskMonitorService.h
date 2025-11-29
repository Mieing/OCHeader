@class NSNumber, NSString;

@interface AWECommerceTaskMonitorService : HTSService <AWECommerceTaskMonitorService, AWERouterDelegate>

@property (retain, nonatomic) NSNumber *currentCid;
@property (copy, nonatomic) NSString *currentLogExtra;
@property (copy, nonatomic) NSString *currentOpenUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAwemeModel:(id)a0;
- (void)resetWithAwemeModel:(id)a0;
- (BOOL)blockAbnormalTaskIfNeedWithAweme:(id)a0;
- (BOOL)enableCheckAwemeModel;
- (void)routerDidFailTransferingWithURLString:(id)a0 errorMessage:(id)a1;
- (void)routerDidFailRetrievingViewControllerForURLString:(id)a0 errorMessage:(id)a1;
- (id)getManagerSettings;
- (void)verifyIsAbnormalWithAweme:(id)a0;
- (BOOL)monitorExpand;
- (void)trackRouterFailWithURL:(id)a0 errorMessage:(id)a1;
- (void)trackGenerateViewControllerFailedWithURL:(id)a0 errorMessage:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
