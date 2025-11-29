@class BDPMultiDelegateProxy, NSMutableDictionary;
@protocol BDPShareEventHandler;

@interface BDPShareEventCenter : NSObject

@property (retain) BDPMultiDelegateProxy<BDPShareEventHandler> *handlers;
@property (copy, nonatomic) id /* block */ customizedGidBlock;
@property (retain, nonatomic) NSMutableDictionary *shareResultCallbacks;

+ (void)registShareEventHandler:(id)a0;
+ (void)fireShareEventWithUniqueID:(id)a0 channel:(id)a1 from:(id)a2;
+ (void)setGidGetBlock:(id /* block */)a0;
+ (void)fireShareEventWithUniqueID:(id)a0 channel:(id)a1 from:(id)a2 extra:(id)a3;
+ (void)dispatchShareEvent:(id)a0 param:(id)a1 uniqueID:(id)a2 usePureHandler:(BOOL)a3 completion:(id /* block */)a4;
+ (id)getCustomizedGid;
+ (void)fireShareEventWithUniqueID:(id)a0 channel:(id)a1 from:(id)a2 extra:(id)a3 completion:(id /* block */)a4;
+ (void)fireShareEventWithUniqueID:(id)a0 channel:(id)a1 from:(id)a2 completion:(id /* block */)a3;
+ (id)sharedInstance;

- (void)setGidGetBlock:(id /* block */)a0;
- (id)getCustomizedGid;
- (void)handleShareBusinessResultCallBack:(id /* block */)a0 error:(id)a1 innerExtra:(id)a2 result:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
