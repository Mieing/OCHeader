@class NSString, NSNumber;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1ShootPositionSearchNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ query;
}

@property (nonatomic, copy) NSString *query;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithQuery:(id)a0 count:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
