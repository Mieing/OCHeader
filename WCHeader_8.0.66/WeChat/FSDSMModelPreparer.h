@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FSDSMModelPreparer : NSObject <DSMMatcherDelegate>

@property (retain, nonatomic) NSMutableSet *whiteSet;
@property (retain, nonatomic) NSMutableSet *whiteInfoSet;
@property (retain, nonatomic) NSMutableSet *blackSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *buildingQueue;
@property (nonatomic) BOOL isPreparing;
@property (nonatomic) BOOL isPrepared;
@property (nonatomic) int keywordCount;
@property (retain, nonatomic) NSString *searchModelVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cleanCacheSet;
- (void)cleanSearchModel;
- (id)getKeywordContentVersion;
- (unsigned int)loadRealtimeData;
- (void)startBuildSearchModel;
- (void)tryBuildSearchModel:(unsigned int)a0;
- (BOOL)startBuilding;
- (void)enumerateItemUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
