@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenGetMasterEWechatPanelNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ toSecUid;
    void /* function */ ext;
}

@property (nonatomic, retain) NSNumber *guideStatus;
@property (nonatomic, retain) NSNumber *conversationShortId;
@property (nonatomic, copy) NSString *toSecUid;
@property (nonatomic, copy) NSString *ext;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initToSecUid:(id)a0 guideStatus:(id)a1 conversationShortId:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
