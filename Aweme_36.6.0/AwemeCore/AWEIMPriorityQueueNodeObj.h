@class NSString;
@protocol AWEIMSyncPriorityDispatchObjectProtocol;

@interface AWEIMPriorityQueueNodeObj : NSObject <AWEIMSafePriorityQueueNodeProtocol>

@property (weak, nonatomic) id<AWEIMSyncPriorityDispatchObjectProtocol> cls;
@property (nonatomic) unsigned long long priorityValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPriority:(unsigned long long)a0 cls:(id)a1;
- (void).cxx_destruct;

@end
