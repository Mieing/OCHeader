@class NSString, NSNumber;

@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentTopSaveNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ awemeId;
    void /* function */ commentId;
}

@property (nonatomic, copy) NSString *awemeId;
@property (nonatomic, copy) NSString *commentId;
@property (nonatomic, retain) NSNumber *op;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
