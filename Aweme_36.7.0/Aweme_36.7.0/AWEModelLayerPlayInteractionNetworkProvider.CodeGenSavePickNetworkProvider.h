@class NSNumber, NSString;

@interface AWEModelLayerPlayInteractionNetworkProvider.CodeGenSavePickNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ enterFrom;
}

@property (nonatomic, retain) NSNumber *itemId;
@property (nonatomic, retain) NSNumber *action;
@property (nonatomic, copy) NSString *enterFrom;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
