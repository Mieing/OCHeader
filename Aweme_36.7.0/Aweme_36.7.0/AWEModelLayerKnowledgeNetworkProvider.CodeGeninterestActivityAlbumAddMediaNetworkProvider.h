@class NSString, NSArray;

@interface AWEModelLayerKnowledgeNetworkProvider.CodeGeninterestActivityAlbumAddMediaNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ albumId;
    void /* function */ activityId;
    void /* function */ mediaList;
}

@property (nonatomic, copy) NSString *albumId;
@property (nonatomic, copy) NSString *activityId;
@property (nonatomic, copy) NSArray *mediaList;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
