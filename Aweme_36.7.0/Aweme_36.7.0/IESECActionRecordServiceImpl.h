@class NSMutableDictionary, IESECActionRecordEventDispatcher, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IESECActionRecordServiceImpl : NSObject <IESECActionRecordService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) IESECActionRecordEventDispatcher *dispatcher;
@property (retain, nonatomic) NSMutableDictionary *linkedListMap;
@property (retain, nonatomic) NSMutableDictionary *moduleActionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultService;

- (BOOL)storeStartNode:(id)a0;
- (BOOL)addOtherNode:(id)a0;
- (id)linkedListWithModuleString:(id)a0 actionString:(id)a1;
- (BOOL)storeNode:(id)a0;
- (void)clearLinkedListIfNeededWithNode:(id)a0;
- (id)generateRateStartEventWithNodeUUID:(id)a0;
- (id)generateRateSuccessEventWithNodeUUID:(id)a0;
- (id)generateRateFailureEventWithNodeUUID:(id)a0;
- (id)generateSingleEventWithNode:(id)a0;
- (id)basicParamsWithHeadNode:(id)a0;
- (id)infoNodesEntriesFromLinkedList:(id)a0;
- (id)errorNodesEntriesFromLinkedList:(id)a0;
- (id)deriveEventIfNeededWithNode:(id)a0;
- (void)storeNodeThenDispatchEventIfNeededWithNode:(id)a0;
- (id)recordNode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerConsumer:(id)a0;

@end
