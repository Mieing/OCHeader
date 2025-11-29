@class NSNumber, NSString;

@interface AWEModelLayerUserProfileNetworkProvider.CodeGenV1CombineMixListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ fieldScene;
    void /* function */ extra;
}

@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, copy) NSString *fieldScene;
@property (nonatomic, copy) NSString *extra;
@property (nonatomic, retain) NSNumber *callScene;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
