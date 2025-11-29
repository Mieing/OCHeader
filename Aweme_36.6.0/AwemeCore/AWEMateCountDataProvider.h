@class NSNumber, NSString;

@interface AWEMateCountDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWEMateCountDataProvider>

@property (retain, nonatomic) NSNumber *mateCountMemoryCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mutualMateCondition;

- (void)interceptor_readFromFile:(id)a0 completion:(id /* block */)a1;
- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (id)readFromMemory:(id)a0;
- (void)readFromFile:(id)a0 completion:(id /* block */)a1;
- (void)localDataCenterDidUpdate:(id)a0;
- (id)syncReadFromStorage;
- (void)updateCacheAndNotifyObservers:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;
- (void)dealloc;

@end
