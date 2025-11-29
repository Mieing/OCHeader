@class NSNumber, NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1AiMemoryAssetQueryNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ deviceId;
    void /* function */ assetIdList;
}

@property (nonatomic, retain) NSNumber *userId;
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, copy) NSString *assetIdList;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
