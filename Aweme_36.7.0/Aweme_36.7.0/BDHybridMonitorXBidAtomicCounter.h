@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDHybridMonitorXBidAtomicCounter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *counter_queue;
@property (retain, nonatomic) NSMutableDictionary *dict;

+ (id)shareInstance;

- (unsigned long long)_getBidCount:(id)a0;
- (unsigned long long)increaseIdForBid:(id)a0;
- (void).cxx_destruct;

@end
