@class NSNumber;

@interface AWEModelLayerCommentNetworkProvider.CodeGenV1CommentSelfListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider

@property (nonatomic, retain) NSNumber *startTime;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *refresh;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
