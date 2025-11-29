@class NSString, NSHashTable;

@interface AWELivePreStreamEventServiceImp : NSObject <AWELivePreStreamEventService>

@property (retain, nonatomic) NSHashTable *hashTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)eventPlayerMonitorStateInfo:(id)a0;
- (void)registEventReceiver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeEventReceiver:(id)a0;

@end
