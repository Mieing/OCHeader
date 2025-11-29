@class NSString, NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenInfoOtherWithSceneNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ scene;
}

@property (nonatomic, copy) NSString *scene;
@property (nonatomic, retain) NSNumber *conversationShortId;
@property (nonatomic, retain) NSNumber *shareLinkType;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
