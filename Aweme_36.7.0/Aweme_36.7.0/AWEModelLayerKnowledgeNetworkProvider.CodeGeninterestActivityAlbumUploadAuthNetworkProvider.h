@class NSNumber, NSString;

@interface AWEModelLayerKnowledgeNetworkProvider.CodeGeninterestActivityAlbumUploadAuthNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ albumId;
    void /* function */ activityId;
}

@property (nonatomic, retain) NSNumber *mediaType;
@property (nonatomic, copy) NSString *albumId;
@property (nonatomic, copy) NSString *activityId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
