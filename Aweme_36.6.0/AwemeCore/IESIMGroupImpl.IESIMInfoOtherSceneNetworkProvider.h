@class NSString, NSNumber, NSDictionary;

@interface IESIMGroupImpl.IESIMInfoOtherSceneNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ scene;
    void /* function */ otherParams;
}

@property (nonatomic, copy) NSString *scene;
@property (nonatomic, retain) NSNumber *conversationShortId;
@property (nonatomic, copy) NSDictionary *otherParams;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
