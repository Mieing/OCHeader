@class NSString, NSNumber, NSDictionary;

@interface AWEModelLayerIMNetworkProvider.CodeGenGroupDistributionSquareInfoNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ source;
    void /* function */ bizExt;
}

@property (nonatomic, copy) NSString *source;
@property (nonatomic, retain) NSNumber *index;
@property (nonatomic, copy) NSDictionary *bizExt;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
