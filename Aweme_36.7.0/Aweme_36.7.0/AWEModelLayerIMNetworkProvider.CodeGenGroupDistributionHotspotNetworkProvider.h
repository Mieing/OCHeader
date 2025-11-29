@class NSString, NSArray, NSDictionary;

@interface AWEModelLayerIMNetworkProvider.CodeGenGroupDistributionHotspotNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ source;
    void /* function */ existingHotspotIds;
    void /* function */ bizExt;
}

@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSArray *existingHotspotIds;
@property (nonatomic, copy) NSDictionary *bizExt;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
