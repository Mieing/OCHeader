@class IESLivePreloadRequestParam, NSMutableDictionary, NSString, IESLivePreloadControlAdapter;

@interface IESLivePreloadRequestControl : NSObject <IESLivePreloadRequestControlProtocol>

@property (retain, nonatomic) NSMutableDictionary *requestUnitPool;
@property (nonatomic) BOOL installed;
@property (nonatomic) unsigned long long currentRequestStage;
@property (retain, nonatomic) IESLivePreloadControlAdapter *preloadControlAdapter;
@property (retain, nonatomic) IESLivePreloadRequestParam *preloadRequestParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)subscribePreloadBusiness:(unsigned long long)a0 identifier:(id)a1 complete:(id /* block */)a2;
- (void)removeSubscriberWithBusiness:(unsigned long long)a0 identifier:(id)a1;
- (id)unitWithBusiness:(unsigned long long)a0;
- (void)requestStage:(unsigned long long)a0;
- (void)requestWithConfig:(id)a0;
- (void)realRequestStage:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)install;

@end
