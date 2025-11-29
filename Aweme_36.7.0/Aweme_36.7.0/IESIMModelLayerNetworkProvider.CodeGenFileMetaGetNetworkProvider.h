@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenFileMetaGetNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
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
