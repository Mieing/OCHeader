@class NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWECommerceMultiStrategyManager : HTSService <AWECommerceMultiStrategyManager>

@property (copy, nonatomic) NSDictionary *config;
@property (retain, nonatomic) NSMutableDictionary *detailResult;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *strategyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableMultiStrategy;
- (void)triggerPrfCollectWithModel:(id)a0 nextAdModel:(id)a1 index:(long long)a2 state:(unsigned long long)a3;
- (long long)strategyResultWith:(id)a0 type:(unsigned long long)a1;
- (void)trackWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
