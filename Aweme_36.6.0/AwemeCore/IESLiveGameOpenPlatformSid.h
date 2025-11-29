@class NSString, NSMutableArray, IESLiveGameOpenPlatformDyCloudApi;

@interface IESLiveGameOpenPlatformSid : NSObject

@property (retain, nonatomic) IESLiveGameOpenPlatformDyCloudApi *api;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL isRefreshing;
@property (retain, nonatomic) NSMutableArray *refreshBlocks;

- (id)initWithAppId:(id)a0 diContext:(id)a1;
- (void)setSid:(id)a0 timestamp:(long long)a1;
- (id)getSid;
- (BOOL)checkSidExpired;
- (void)refreshSidWithCompletion:(id /* block */)a0;
- (id)_getSidData;
- (void)_refreshResultCallbackWithSid:(id)a0 timestamp:(long long)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)_reLoginToRefreshSidWithCompletion:(id /* block */)a0;
- (id)_getAllSidData;
- (void).cxx_destruct;
- (id)init;

@end
