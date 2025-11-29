@class HTSLiveApi, IESLivePrefetchCacheManager, NSString;
@protocol IESLiveMonitor;

@interface IESLivePrefetchCapability : NSObject <IESPrefetchCapability>

@property (retain, nonatomic) HTSLiveApi *apiClient;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) IESLivePrefetchCacheManager *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)networkForRequest:(id)a0 completion:(id /* block */)a1;
- (id)customCacheStorage;
- (id)envVariables;
- (id)customConfigForProject:(id)a0 version:(id)a1;
- (id)tintTagsToHeaders:(id)a0 tintTags:(id)a1;
- (void)trackPrefetchErrorEvent:(id)a0 category:(id)a1 extra:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
