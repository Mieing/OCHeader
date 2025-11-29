@class NSString, NSArray;

@interface AWEModelLayerKnowledgeNetworkProvider.CodeGeninterestActivityAlbumSetInnerVideoTopNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ albumId;
    void /* function */ activityId;
    void /* function */ itemIdList;
}

@property (nonatomic, copy) NSString *albumId;
@property (nonatomic, copy) NSString *activityId;
@property (nonatomic, copy) NSArray *itemIdList;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
