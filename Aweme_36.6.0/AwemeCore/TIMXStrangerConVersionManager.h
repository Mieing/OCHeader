@class NSString, TIMXSDKInstance;

@interface TIMXStrangerConVersionManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertOrUpdateStrangerConversationRangeWithMinVersion:(long long)a0 maxVersion:(long long)a1 completion:(id /* block */)a2;
- (void)updateStrangerConversationRangeWithOldestVersion:(long long)a0 completion:(id /* block */)a1;
- (id)getIntersectionStrangerConversationRangeWithMinVersion:(long long)a0 maxVersion:(long long)a1;
- (void)migrationInsertStrangerConVersion:(id)a0;
- (void)cleanStrangerConVersion;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
