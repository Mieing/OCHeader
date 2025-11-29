@class NSString;

@interface AWESearchLifeServiceRepeatPredictPreRequestProvider : AWESearchPreRequestLifeServiceProvider <AWESearchPreRequestSceneProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestParamsContextWithObject:(id)a0;
+ (id)preNetworkRequestWithParamsContext:(id)a0 object:(id)a1;
+ (id)predictIDFromParams:(id)a0;
+ (id)predictFetchParamsFromParams:(id)a0;


@end
