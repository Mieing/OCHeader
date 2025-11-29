@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenSendImTickleMsgNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ convId;
}

@property (nonatomic, retain) NSNumber *toUserId;
@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, copy) NSString *convId;
@property (nonatomic, retain) NSNumber *convType;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
