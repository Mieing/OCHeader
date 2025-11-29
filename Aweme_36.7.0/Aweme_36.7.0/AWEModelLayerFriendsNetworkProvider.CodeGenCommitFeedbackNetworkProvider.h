@class NSString, NSNumber;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenCommitFeedbackNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ cardId;
    void /* function */ businessId;
}

@property (nonatomic, copy) NSString *cardId;
@property (nonatomic, retain) NSNumber *actionType;
@property (nonatomic, copy) NSString *businessId;
@property (nonatomic, retain) NSNumber *scene;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
