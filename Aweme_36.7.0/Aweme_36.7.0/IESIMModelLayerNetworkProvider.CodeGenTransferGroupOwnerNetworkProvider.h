@class NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenTransferGroupOwnerNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider

@property (nonatomic, retain) NSNumber *conversationShortId;
@property (nonatomic, retain) NSNumber *toUserId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initToUserId:(id)a0 conversationShortId:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
