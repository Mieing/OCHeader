@class HTSLiveDressListResponse_Data, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface IESLiveNewDressDataStore : NSObject <IESLiveNewDressDataStoreProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSCache *memoryCache;
@property (retain, nonatomic) HTSLiveDressListResponse_Data *dressListModel;
@property (copy, nonatomic) NSString *dressDataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getDressIDsWithDressType:(int)a0;
- (id)getDressOriginDataWithDressID:(id)a0;
- (void)getDressDataFromDiskCache:(id)a0 completion:(id /* block */)a1;
- (void)getDressDataFromMemoryCache:(id)a0 completion:(id /* block */)a1;
- (id)getDressDataFromMemoryCache:(id)a0;
- (id)getDressDataFromDiskCache:(id)a0;
- (void)loadAllDataFromDiskCache;
- (id)p_getDressDataFromDiskCache:(id)a0;
- (void)p_saveDressOriginDataToMemoryCache:(id)a0 dressID:(id)a1;
- (id)p_getDressDataFromMemoryCache:(id)a0;
- (id)p_getDressOriginDataFromMemoryCache:(id)a0;
- (id)p_getDressOriginDataFromDiskCache:(id)a0;
- (void)saveDataToDiskCache:(id)a0;
- (void)saveDressDataToMemoryCache:(id)a0 dressID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
