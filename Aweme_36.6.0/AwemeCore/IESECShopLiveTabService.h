@class NSString, IESECServiceProxy, IESECShopLiveTabTransitionContext, NSMutableDictionary;
@protocol IESECShopDataService, IESECShopForwardCoService;

@interface IESECShopLiveTabService : IESECShopService <IESECShopLiveTabService> {
    NSMutableDictionary *_viewOps;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly, nonatomic) BOOL liveTabVisible;
@property (readonly, nonatomic) IESECShopLiveTabTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginTransition:(id)a0;
- (void)startViewOperations;
- (void)revertViewOperations;
- (void)startViewOperation:(id)a0;
- (void)revertViewOperation:(id)a0;
- (void)registerView:(id)a0 withType:(id)a1 forOperation:(unsigned long long)a2;
- (void)registerView:(id)a0 withType:(id)a1 forOperation:(unsigned long long)a2 reverseOperation:(unsigned long long)a3;
- (void)startView:(id)a0 operation:(unsigned long long)a1;
- (unsigned long long)reverseOperation:(unsigned long long)a0;
- (void)operateView:(id)a0 display:(BOOL)a1 animated:(BOOL)a2;
- (void)operateViewHierarchy:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)finishTransition;

@end
