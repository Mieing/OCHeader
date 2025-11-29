@class NSString, NSNumber;

@interface AWEModelLayerShowNetworkProvider.CodeGengetTagsNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ fromSource;
}

@property (nonatomic, copy) NSString *fromSource;
@property (nonatomic, retain) NSNumber *tagType;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
