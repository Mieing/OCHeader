@class NSString;

@interface AFDRecommendToFriendApiService : NSObject <AFDRecommendToFriendApiServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendRequestParamWithContext:(id)a0;
+ (id)cancelRecommendRequestParamWithModel:(id)a0;
+ (id)cancelUrlString;
+ (void)requestRecommendWithContext:(id)a0 onRecommendBlock:(id /* block */)a1 actionFailedBlock:(id /* block */)a2;
+ (void)cancelRecommendAweme:(id)a0 onCompletion:(id /* block */)a1;
+ (id)URLString;


@end
