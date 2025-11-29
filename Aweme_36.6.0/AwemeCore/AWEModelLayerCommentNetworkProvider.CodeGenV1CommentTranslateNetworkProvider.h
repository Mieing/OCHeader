@class NSString;

@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentTranslateNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ commentId;
    void /* function */ targetLanguage;
    void /* function */ commentText;
    void /* function */ commentTextExtra;
}

@property (nonatomic, copy) NSString *commentId;
@property (nonatomic, copy) NSString *targetLanguage;
@property (nonatomic, copy) NSString *commentText;
@property (nonatomic, copy) NSString *commentTextExtra;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithCommentId:(id)a0 targetLanguage:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
