@class NSString;

@interface AWEConcernFeedRequestCommonParamProvider : NSObject <AWEConcernFeedRequestParamProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addressBookAccess;
- (id)monitorParams;
- (id)liveModuleService;
- (id)commonParamsWithPullType:(long long)a0;
- (id)sequenceFeatureParams;
- (id)locationAccess;
- (id)getExpectedSizeInfo;
- (id)extraParamsWithPullType:(long long)a0 currentParams:(id)a1;

@end
