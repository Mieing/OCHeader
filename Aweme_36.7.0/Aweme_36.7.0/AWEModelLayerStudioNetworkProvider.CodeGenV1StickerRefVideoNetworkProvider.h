@class NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1StickerRefVideoNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ effectId;
    void /* function */ sdkVersion;
}

@property (nonatomic, copy) NSString *effectId;
@property (nonatomic, copy) NSString *sdkVersion;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
