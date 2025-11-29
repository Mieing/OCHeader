@class NSNumber, NSString, NSArray;

@interface AWEModelLayerStudioNetworkProvider.CodeGenMaterialGetGeoInfoNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ lang;
    void /* function */ opts;
    void /* function */ appid;
    void /* function */ deviceId;
}

@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, copy) NSString *lang;
@property (nonatomic, copy) NSArray *opts;
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *deviceId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
