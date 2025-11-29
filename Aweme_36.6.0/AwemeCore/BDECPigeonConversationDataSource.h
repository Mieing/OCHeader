@class NSString, NSArray, NSDictionary, BDECPigeonMultiDelegate, BDECPigeonFetchConversationDataSourceTimeTracker, NSMutableArray, BDECPigeonChannel;
@protocol BDECPigeonConversationDataSourceDelegate;

@interface BDECPigeonConversationDataSource : NSObject <BDECPigeonConversationDataSourceInterface>

@property (copy) NSArray *data;
@property (copy) NSDictionary *dataMap;
@property (retain, nonatomic) BDECPigeonMultiDelegate<BDECPigeonConversationDataSourceDelegate> *multiDelegates;
@property (retain, nonatomic) BDECPigeonFetchConversationDataSourceTimeTracker *dataFetchTimeTracker;
@property (retain, nonatomic) NSMutableArray *dataUpdateTimeTrackers;
@property (retain, nonatomic) NSMutableArray *dataAddTimeTrackers;
@property (nonatomic) unsigned long long totalUnreadNumberForUnmutedConversations;
@property (nonatomic) unsigned long long totalUnreadNumberForMutedConversations;
@property (copy, nonatomic) NSArray *filterMethods;
@property (copy, nonatomic) NSArray *sortFunctions;
@property (readonly, weak, nonatomic) BDECPigeonChannel *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)loadDataTime;
- (id)buildDataWithSourceData:(id)a0;
- (id)buildMapWithData:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
