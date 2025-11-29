@class NSString, NSNumber;

@interface AWEModelLayerStudioNetworkProvider.CodeGenMaterialGetWeatherNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ districtId;
    void /* function */ dataType;
    void /* function */ output;
    void /* function */ coordtype;
}

@property (nonatomic, copy) NSString *districtId;
@property (nonatomic, retain) NSNumber *location;
@property (nonatomic, copy) NSString *dataType;
@property (nonatomic, copy) NSString *output;
@property (nonatomic, copy) NSString *coordtype;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
