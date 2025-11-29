@class NSArray, NSString, NSNumber;

@interface AWEModelLayerStudioNetworkProvider.CodeGenQueryUserRankingUserInfoNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ secUids;
    void /* function */ effectId;
    void /* function */ appVersion;
    void /* function */ channel;
    void /* function */ devicePlatform;
    void /* function */ deviceId;
    void /* function */ deviceType;
    void /* function */ sdkVersion;
    void /* function */ osVersion;
}

@property (nonatomic, copy) NSArray *secUids;
@property (nonatomic, copy) NSString *effectId;
@property (nonatomic, retain) NSNumber *aid;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, copy) NSString *channel;
@property (nonatomic, copy) NSString *devicePlatform;
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSString *sdkVersion;
@property (nonatomic, copy) NSString *osVersion;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
