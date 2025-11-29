@class NSMutableDictionary, NSString, NSMutableArray, UIViewController;
@protocol AWESearchPopContainerViewProtocol;

@interface AWESearchPopViewsHandler : NSObject <AWESearchPopHandlerProtocol>

@property (retain, nonatomic) NSMutableDictionary *popTaskMap;
@property (retain, nonatomic) NSMutableDictionary *lynxPopMap;
@property (retain, nonatomic) NSMutableArray *popArr;
@property (weak, nonatomic) UIViewController<AWESearchPopContainerViewProtocol> *currentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)registerTaskHandler:(id)a0 withPopName:(id)a1;
- (void)addPopInfoWithDataArr:(id)a0 withChannel:(id)a1;
- (void)removeTaskWithType:(long long)a0 withPopId:(id)a1;
- (id)fetchCouponInfo:(id)a0;
- (void)registerLynxPopTask:(id)a0 withPopId:(id)a1;
- (id)fetchLynxPopTaskWithPopId:(id)a0;
- (id)reRrankAllPopTask:(id)a0;
- (void)addAlertsWithPopArr:(id)a0 channel:(id)a1;
- (void)addAlertWithPopInfo:(id)a0;
- (id)fetchTaskHandlerWithPopName:(id)a0;
- (id)fetchContainerViewController;
- (id)initWithDataArr:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
