@class NSMutableArray, NSObject;
@protocol AWEPOISearchLynxServiceProtocol, OS_dispatch_queue;

@interface ACCGenericTemplatePOIRequestHelper : NSObject

@property (retain, nonatomic) id<AWEPOISearchLynxServiceProtocol> searchLynxManager;
@property (nonatomic) BOOL isFetchingLocation;
@property (retain, nonatomic) NSMutableArray *completionArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)formatPoiInfo:(id)a0 locationModel:(id)a1 formatStr:(id)a2;
+ (id)formatPoiInfo:(id)a0 locationModel:(id)a1 formatStr:(id)a2 index:(unsigned long long)a3;
+ (id)formatPosition:(id)a0 formatStr:(id)a1 index:(unsigned long long)a2;
+ (struct { int x0; int x1; double x2; })formatLocationToDMSWithcoordinate:(double)a0;

- (void)fetchPOIResourceInfoWithSlotInfo:(id)a0 infoFormat:(id)a1 targetLocation:(id)a2 completion:(id /* block */)a3;
- (void)fetchLocationInfoFor:(id)a0 completion:(id /* block */)a1;
- (id)convertToGenericTemplateCustomInfoModelsWithPoiInfo:(id)a0 locationModel:(id)a1 slotInfo:(id)a2 infoFormat:(id)a3;
- (id)locationModelCached;
- (void)addCompletionArray:(id /* block */)a0;
- (void)fetchAddressInfoForLocation:(id)a0 serverLocation:(BOOL)a1 completion:(id /* block */)a2;
- (void)notifyDidFetchedAddressInfo:(id)a0 location:(id)a1 fetchError:(id)a2;
- (void)cacheCurrentLocationModel:(id)a0 location:(id)a1;
- (id)completionArrayCopied;
- (void)clearCompletionArray;
- (void).cxx_destruct;
- (id)init;

@end
