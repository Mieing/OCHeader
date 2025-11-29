@class NSDictionary, NSString, NSHashTable;

@interface IESLiveRevenueInteractLynxDataDispatcher : NSObject <IESLiveRevenueInteractLynxDataDispatcher>

@property (retain, nonatomic) NSHashTable *subscribersTable;
@property (retain, nonatomic) NSDictionary *subscribersMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isValidData:(id)a0;
- (void)onReceiveDataChange:(id)a0 withTag:(id)a1;
- (void)enumerate:(id)a0 sendData:(id)a1 withTag:(id)a2;
- (void)addSubscriber:(id)a0 withDataTags:(id)a1;
- (void)onReceiveDataChangeV2:(id)a0 withTag:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
