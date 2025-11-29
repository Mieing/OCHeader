@class NSNumber, NSString;

@interface AWEModelLayerUserProfileNetworkProvider.CodeGenV1OrderToolBarNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ extra;
}

@property (nonatomic, retain) NSNumber *orderType;
@property (nonatomic, copy) NSString *extra;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
