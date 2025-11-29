@class NSNumber;

@interface AWEModelLayerPlayInteractionNetworkProvider.CodeGenGetPickUserListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider

@property (nonatomic, retain) NSNumber *itemId;
@property (nonatomic, retain) NSNumber *maxCursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *pinUserId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
