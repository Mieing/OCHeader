@class NSString, NSNumber;

@interface AWEModelLayerKnowledgeNetworkProvider.CodeGeninterestActivityAlbumInnerVideoNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ albumId;
    void /* function */ activityId;
}

@property (nonatomic, copy) NSString *albumId;
@property (nonatomic, copy) NSString *activityId;
@property (nonatomic, retain) NSNumber *offset;
@property (nonatomic, retain) NSNumber *count;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
