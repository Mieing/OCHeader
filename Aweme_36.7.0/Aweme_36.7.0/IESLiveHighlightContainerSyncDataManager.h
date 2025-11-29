@class NSMutableDictionary, NSMapTable, HTSLiveNewHighlightContainerSyncData, NSString, NSMutableArray;

@interface IESLiveHighlightContainerSyncDataManager : NSObject <IESLiveDataSyncDelegate, IESLiveHighlightContainerSyncDataStrategyProvider>

@property (retain, nonatomic) NSMutableDictionary *dataTypeMap;
@property (retain, nonatomic) NSMapTable *subscriberMap;
@property (retain, nonatomic) NSMutableArray *dataTypeQueue;
@property (retain, nonatomic) HTSLiveNewHighlightContainerSyncData *cachedSyncData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didSetAttachingDIContext;
- (void)addSubscriber:(id)a0 forViewType:(unsigned long long)a1;
- (void)removeSubscriberForViewType:(unsigned long long)a0;
- (void)addViewType:(unsigned long long)a0;
- (void)removeViewType:(unsigned long long)a0;
- (BOOL)checkIfShowViewType:(unsigned long long)a0;
- (void)handleHighlightContainerSyncData:(id)a0;
- (long long)fetchHighlightViewTypeNeedShow:(id)a0;
- (id)stringWithHighlightViewType:(long long)a0;
- (void)updateHighlightContainerWithShowType:(long long)a0;
- (void)showHighlightForSubsciber:(id)a0;
- (void)hideHighlightForSubsciber:(id)a0;
- (BOOL)isValidItem:(id)a0;
- (id)stringWithHighlightDataType:(long long)a0;
- (BOOL)needKeptViewType:(long long)a0;
- (id)lookForSubscriberForKey:(id)a0;
- (void)hideHighlightForViewType:(long long)a0;
- (void)showHighlightForViewType:(long long)a0;
- (id)lookForSubscriberForDataType:(int)a0;
- (void).cxx_destruct;
- (id)init;

@end
