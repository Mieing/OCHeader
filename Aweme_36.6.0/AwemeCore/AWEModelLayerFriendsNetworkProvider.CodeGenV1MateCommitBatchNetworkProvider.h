@class NSString, NSNumber;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1MateCommitBatchNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ userIds;
    void /* function */ applyMessage;
}

@property (nonatomic, copy) NSString *userIds;
@property (nonatomic, copy) NSString *applyMessage;
@property (nonatomic, retain) NSNumber *from;
@property (nonatomic, retain) NSNumber *fromPre;
@property (nonatomic, retain) NSNumber *channelId;
@property (nonatomic, retain) NSNumber *fromAction;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
