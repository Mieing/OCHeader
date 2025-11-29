@class NSString, NSNumber;

@interface AWEModelLayerKnowledgeNetworkProvider.CodeGengetAlbumListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ chatGroupId;
}

@property (nonatomic, copy) NSString *chatGroupId;
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
