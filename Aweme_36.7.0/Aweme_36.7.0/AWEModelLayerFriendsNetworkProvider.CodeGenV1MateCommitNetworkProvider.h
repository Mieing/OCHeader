@class NSString, NSNumber;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1MateCommitNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ userId;
    void /* function */ applyMessage;
}

@property (nonatomic, copy) NSString *userId;
@property (nonatomic, retain) NSNumber *actionType;
@property (nonatomic, copy) NSString *applyMessage;
@property (nonatomic, retain) NSNumber *from;
@property (nonatomic, retain) NSNumber *fromPre;
@property (nonatomic, retain) NSNumber *channelId;
@property (nonatomic, retain) NSNumber *fromAction;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithActionType:(id)a0 userId:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
