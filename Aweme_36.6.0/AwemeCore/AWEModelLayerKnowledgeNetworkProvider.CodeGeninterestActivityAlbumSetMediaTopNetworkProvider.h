@class NSString, NSArray;

@interface AWEModelLayerKnowledgeNetworkProvider.CodeGeninterestActivityAlbumSetMediaTopNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ albumId;
    void /* function */ activityId;
    void /* function */ mediaIdList;
}

@property (nonatomic, copy) NSString *albumId;
@property (nonatomic, copy) NSString *activityId;
@property (nonatomic, copy) NSArray *mediaIdList;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
