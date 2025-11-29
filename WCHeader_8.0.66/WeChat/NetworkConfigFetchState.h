@class NSString, NSDictionary, YtExtraOptions;

@interface NetworkConfigFetchState : BaseState {
    BOOL needLocalConfig;
    NSString *appId;
    NSString *configUrl;
    int changePointNum;
    NSString *extraConfig;
    YtExtraOptions *extraOptions;
    NSString *controlConfig;
    NSDictionary *selectData;
    int backendProtoType;
}

- (void)loadWithName:(id)a0 withSDKConfigData:(id)a1;
- (void)enter;
- (void)moveToNextState;
- (void)sendUIEventWithValue:(id)a0 withType:(id)a1;
- (void)handleLiveFourGetReq;
- (void)handleGetLiveTypeReq;
- (void)responseHandler:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
