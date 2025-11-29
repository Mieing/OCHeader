@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLLPOITempoTemplateProvider : NSObject <TempoiOS.TempoTemplateProvider> {
    NSMutableDictionary *_dataCache;
    NSMutableDictionary *_updateCacheFrequencyControl;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *cacheSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTemplateDataLocalWithTemplate:(id)a0;
- (void)cleanAllCache;
- (id)fetchTemplateDataWithTemplate:(id)a0;
- (id)fetchTemplateData:(id)a0;
- (id)forestURLWithTemplateURL:(id)a0;
- (id)getDataWithURL:(id)a0 parameters:(id)a1;
- (void)cacheData:(id)a0 url:(id)a1;
- (id)CDNHost;
- (BOOL)isLocalCacheNeedUpdateForURL:(id)a0;
- (void)refreshLocalCacheUpdateTimeForURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
