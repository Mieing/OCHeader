@class NSNumber;

@interface AWEModelLayerCommentNetworkProvider.CodeGenV2CommentSelfInteractionListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider

@property (nonatomic, retain) NSNumber *offset;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *needBanner;
@property (nonatomic, retain) NSNumber *currentBannerId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
