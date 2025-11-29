@class NSString;

@interface AWEMRCommonSubscribeNetworkManager : HTSService <AWEMRCommonSubscribeNetworkManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchCommonSubscribeGetWithProvider:(id)a0 completion:(id /* block */)a1;
+ (void)fetchCommonSubscribeGetWithProvider:(id)a0 config:(id)a1 completion:(id /* block */)a2;
+ (void)fetchCommonSubscribeSetWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)fetchCommonSubscribeSetWithModel:(id)a0 config:(id)a1 completion:(id /* block */)a2;
+ (void)fetchCommonSubscribeManageWithConfig:(id)a0 completion:(id /* block */)a1;
+ (id)generateNetworkFinishMonitor;
+ (void)trackSLOWithMonitor:(id)a0 networkUrlPath:(long long)a1 networkProvider:(id)a2 networkResult:(id)a3;
+ (void)fetchCommonSubscribeManageDetailWithProvider:(id)a0 config:(id)a1 completion:(id /* block */)a2;
+ (void)fetchCommonSubscribePopGetWithProvider:(id)a0 config:(id)a1 completion:(id /* block */)a2;
+ (void)notifyOnNetworkSuccess:(id)a0;
+ (void)p_trackSLOWithMonitor:(id)a0 sloModel:(id)a1;
+ (id)validateResponse:(id)a0 networkUrlPath:(long long)a1;
+ (id)validateServiceAccountList:(id)a0;
+ (id)validateServiceAccount:(id)a0;
+ (id)validatePopupModel:(id)a0;
+ (id)validateSubcategory:(id)a0;
+ (id)validateChannel:(id)a0;
+ (void)fetchCommonSubscribeManageWithCompletion:(id /* block */)a0;
+ (void)fetchCommonSubscribeManageDetailWithProvider:(id)a0 completion:(id /* block */)a1;
+ (void)fetchCommonSubscribePopGetWithProvider:(id)a0 completion:(id /* block */)a1;


@end
