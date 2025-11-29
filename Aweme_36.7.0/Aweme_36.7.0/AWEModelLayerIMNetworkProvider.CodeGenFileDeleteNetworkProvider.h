@class NSNumber, NSString;

@interface AWEModelLayerIMNetworkProvider.CodeGenFileDeleteNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ fileId;
}

@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, copy) NSString *fileId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
