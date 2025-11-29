@class NSString;

@interface AWEModelLayerShowNetworkProvider.CodeGenV1MediumCommentGetCommentInfoNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ commentId;
    void /* function */ cid;
}

@property (nonatomic, copy) NSString *commentId;
@property (nonatomic, copy) NSString *cid;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
