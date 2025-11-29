@class NSString, IESEffectResourcePreloadDataManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, EffectPlatformRequestDelegate;

@interface IESEffectResourcePreloader : NSObject

@property (copy, nonatomic) NSString *requestDomain;
@property (retain, nonatomic) IESEffectResourcePreloadDataManager *dataManager;
@property (retain, nonatomic) NSMutableDictionary *downloadTaskMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double lastPreloadTime;
@property (retain, nonatomic) NSMutableDictionary *triggerPauseMap;
@property double coolDownloadTime;
@property (retain, nonatomic) id<EffectPlatformRequestDelegate> requestDelegate;
@property (copy, nonatomic) id /* block */ requestParametersBlock;
@property (copy, nonatomic) id /* block */ isResourceFileExistBlock;

- (id)initWithLeavePath:(id)a0 requestDomain:(id)a1;
- (id)resourcePathWithName:(id)a0 resourceURI:(id)a1;
- (void)downloadPreloadResourceIfNeed:(id)a0 downloadProgress:(id /* block */)a1 downloadCompletion:(id /* block */)a2 resultBlock:(id /* block */)a3;
- (id)resourceRecordWithName:(id)a0;
- (void)fetchPreloadResourceWithBusinessID:(long long)a0 businessKey:(id)a1 extraParameters:(id)a2;
- (void)pausePreloadResourceIfNeedWithBusinessID:(long long)a0 businessKey:(id)a1;
- (unsigned long long)getTotalPreloadResourceSize;
- (void)removeAllExistPreloadResources;
- (void)_fetchPreloadResourceWithBusinessID:(long long)a0 businessKey:(id)a1 extraParameters:(id)a2;
- (id)serverErrorWithJson:(id)a0;
- (void)downloadPreloadResourceList:(id)a0 withBusinessKey:(id)a1 businessID:(long long)a2 beginPreloadTime:(double)a3 downloadParameters:(id)a4 requestID:(id)a5;
- (void)downloadPreloadResource:(id)a0 withBusinessKey:(id)a1 businessID:(long long)a2 parameters:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;

@end
