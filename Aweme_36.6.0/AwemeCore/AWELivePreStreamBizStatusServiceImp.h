@class AWELivePreStreamBizStatusContext, NSString, NSHashTable;

@interface AWELivePreStreamBizStatusServiceImp : NSObject <AWELivePreStreamBizStatusContextDelegate, AWELivePreStreamBizStatusService>

@property (retain, nonatomic) AWELivePreStreamBizStatusContext *statusContext;
@property (retain, nonatomic) NSHashTable *hashTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBizStatus:(unsigned long long)a0 open:(BOOL)a1;
- (void)registStatusContextReceiver:(id)a0;
- (unsigned long long)currentBizStatus;
- (void)statusOptionDidChanged;
- (void)setupStatusContext;
- (void)removeStatusContextReceiver:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;

@end
