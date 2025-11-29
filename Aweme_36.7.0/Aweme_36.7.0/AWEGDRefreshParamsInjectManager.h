@class NSString, NSMutableArray;

@interface AWEGDRefreshParamsInjectManager : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) NSMutableArray *injectorList;
@property (copy, nonatomic) id /* block */ reporter;

- (id)getDomainKeyBySession;
- (id)initWithSessionID:(id)a0 reporter:(id /* block */)a1;
- (id)getRefreshRequestParams;
- (void)subscribeLifeStorageGDRefreshParamsChangeWithSessionID;
- (void)unsubscribeLifeStorageGDRefreshParamsChange;
- (unsigned long long)comparePreItem:(id)a0 withAnotherItem:(id)a1;
- (void)handleComponentListChanged:(id)a0;
- (void)addRefreshParamsInjector:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
