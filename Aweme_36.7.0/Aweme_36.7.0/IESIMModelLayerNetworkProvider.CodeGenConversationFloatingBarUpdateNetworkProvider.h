@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenConversationFloatingBarUpdateNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ barId;
}

@property (nonatomic, retain) NSNumber *conversationShortId;
@property (nonatomic, copy) NSString *barId;
@property (nonatomic, retain) NSNumber *operation;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithBarId:(id)a0 operation:(id)a1 conversationShortId:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
