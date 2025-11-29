@class NSString, NSNumber;

@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentMultiDeleteNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ cids;
}

@property (nonatomic, copy) NSString *cids;
@property (nonatomic, retain) NSNumber *deleteGroupType;
@property (nonatomic, retain) NSNumber *needBlock;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
