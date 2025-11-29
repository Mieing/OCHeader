@class NSString, AWEArchEDCEventDataDict, NSObject, AWEArchProtector;
@protocol OS_dispatch_queue;

@interface AWEArchEventDataController : NSObject

@property (retain, nonatomic) AWEArchProtector *p_parentEDC;
@property (retain, nonatomic) AWEArchProtector *childEDCList;
@property (retain, nonatomic) AWEArchProtector *dataDict;
@property (retain, nonatomic) AWEArchEDCEventDataDict *subscribeDataDict;
@property (retain, nonatomic) AWEArchEDCEventDataDict *subscribeEventDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handleChildEDCQueue;
@property (copy, nonatomic) NSString *tag;
@property (readonly, weak, nonatomic) AWEArchEventDataController *parentEDC;
@property (readonly, nonatomic) AWEArchEventDataController *rootEDC;

- (void)addChildEDC:(id)a0;
- (void)removeChildEDC:(id)a0;
- (void)removeAllChildEDC;
- (id)sharedDataOfID:(id)a0 defaultValue:(id)a1;
- (id)sharedDataOfID:(id)a0;
- (void)shareData:(id)a0 toID:(id)a1;
- (void)shareData:(id)a0 toID:(id)a1 broadcast:(BOOL)a2;
- (void)shareDataToID:(id)a0 closure:(id /* block */)a1;
- (void)shareDataToID:(id)a0 broadcast:(BOOL)a1 closure:(id /* block */)a2;
- (void)sendEvent:(id)a0 data:(id)a1;
- (void)subscribeEvent:(id)a0 target:(id)a1 completion:(id /* block */)a2;
- (void)subscribeData:(id)a0 target:(id)a1 completion:(id /* block */)a2;
- (void)setParentEDC:(id)a0;
- (void)removeSharedDataWithID:(id)a0;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)init;

@end
