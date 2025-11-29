@class NSString, NSNumber;

@interface AWEModelLayerIMNetworkProvider.CodeGenRemindCreateGroupNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ targetUserSecUid;
}

@property (nonatomic, copy) NSString *targetUserSecUid;
@property (nonatomic, retain) NSNumber *scene;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
