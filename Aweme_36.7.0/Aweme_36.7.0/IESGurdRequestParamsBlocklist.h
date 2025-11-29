@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESGurdRequestParamsBlocklist : NSObject {
    NSMutableDictionary *blocklistDictionary;
    NSObject<OS_dispatch_semaphore> *lock;
}

- (void)addParams:(id)a0 forAccessKey:(id)a1;
- (void)removeParams:(id)a0 forAccessKey:(id)a1;
- (BOOL)isParamInBlocklistForAccessKey:(id)a0 param:(id)a1;
- (id)filteredParamsForAccessKey:(id)a0 originalParams:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
