@class NSString, NSMutableDictionary;

@interface AWEAIGCKeepAliveManager : NSObject <AWEAIGCKeepAliveManagerModuleService>

@property (retain, nonatomic) NSMutableDictionary *requestManagerCache;
@property (retain, nonatomic) NSMutableDictionary *keepAliveQueryCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)saveRequestManager:(id)a0 uniqueKey:(id)a1;
- (id)getRequestManager:(id)a0;
- (void)removeRequestManager:(id)a0;
- (void)saveKeepAliveQuery:(id)a0 uniqueKey:(id)a1;
- (id)getKeepAliveQuery:(id)a0;
- (void)removeKeepAliveQuery:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
