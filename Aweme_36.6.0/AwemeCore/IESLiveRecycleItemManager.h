@class NSString, NSMutableDictionary, IESLiveRecycleItemPool;

@interface IESLiveRecycleItemManager : NSObject <IESLiveRecycleItemService>

@property (retain, nonatomic) NSMutableDictionary *activatedPoolDict;
@property (retain, nonatomic) IESLiveRecycleItemPool *reusePool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)enqueueAllItemWhenExitRoom:(id)a0;
- (id)recycleItemWithConfig:(id)a0 diContext:(id)a1;
- (BOOL)checkConfigLegal:(id)a0;
- (id)p_fetchActivatedPoolWithRoom:(id)a0 needInit:(BOOL)a1;
- (void).cxx_destruct;

@end
