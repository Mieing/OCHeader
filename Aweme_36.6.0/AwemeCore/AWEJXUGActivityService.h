@class NSString, NSMutableDictionary;

@interface AWEJXUGActivityService : HTSService <AWERouterInterceptorDelegate, AWEJXUGActivityService>

@property (retain, nonatomic) NSMutableDictionary *feDataMap;
@property (retain, nonatomic) NSMutableDictionary *activityDataMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)feedTabBarDidSwitchTab:(id)a0;
- (void)bottomTabBarDidSwitchTab:(id)a0;
- (void)storageFEData:(id)a0;
- (void)dismissLoginIfNeeded:(id)a0;
- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (void)storeActivityData:(id)a0 forTaskType:(id)a1;
- (id)getFEDataWithId:(id)a0;
- (id)getActivityDataForTaskType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupIfNeeded;

@end
