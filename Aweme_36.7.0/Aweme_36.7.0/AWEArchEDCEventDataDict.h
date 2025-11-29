@class AWEArchProtector, NSObject;
@protocol OS_dispatch_queue;

@interface AWEArchEDCEventDataDict : NSObject

@property (retain, nonatomic) AWEArchProtector *dict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handleItemQueue;

- (void)addItemWithUniqueID:(id)a0 target:(id)a1 completion:(id /* block */)a2;
- (void)needClearWithUniqueID:(id)a0;
- (id)getItemsWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
