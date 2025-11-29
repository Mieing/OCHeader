@class NSString;

@interface AWEConcernFeedRequestForceInsertParamProvider : NSObject <AWEConcernFeedRequestForceInsertParamProviderProtocol>

@property (nonatomic) unsigned long long fakeStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEConcernForceInsertAdaperClass;

- (id)extraParamsWithPullType:(long long)a0 currentParams:(id)a1;
- (id)forceInsertParamsWithCurrentParams:(id)a0;
- (id)aidCacheParams:(id)a0;
- (id)fakeRefreshParams:(id)a0;
- (id)aAWEConcernForceInsertAdaper;

@end
