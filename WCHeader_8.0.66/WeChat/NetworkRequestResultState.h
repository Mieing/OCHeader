@class NSString, NSDictionary, UIImage, YtExtraOptions;

@interface NetworkRequestResultState : BaseState {
    UIImage *frameUIImage;
    int finalConfidenceThreshold;
    BOOL isManual;
    int similarityThreshold;
    NSDictionary *requestOptions;
    int backendProtoType;
    YtExtraOptions *extraOptions;
    NSString *controlConfig;
}

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *secretId;
@property (retain, nonatomic) NSString *secretKey;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *resultUrl;

- (void)loadWithName:(id)a0 withSDKConfigData:(id)a1;
- (void)enter;
- (void)handleEvent:(id)a0;
- (void)sendUIEventWithValue:(id)a0 withType:(id)a1;
- (void)onSilentRequest;
- (void)onActionRequest;
- (void)onResponseHandle:(id)a0 error:(id)a1;
- (void)checkResult:(id)a0;
- (void).cxx_destruct;

@end
