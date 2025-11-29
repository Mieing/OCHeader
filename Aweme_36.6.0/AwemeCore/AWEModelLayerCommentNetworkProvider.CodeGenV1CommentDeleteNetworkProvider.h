@class NSString, NSNumber, NSDictionary;

@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentDeleteNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ cid;
    void /* function */ extra;
}

@property (nonatomic, copy) NSString *cid;
@property (nonatomic, retain) NSNumber *serviceId;
@property (nonatomic, retain) NSNumber *commentScene;
@property (nonatomic, copy) NSDictionary *extra;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
