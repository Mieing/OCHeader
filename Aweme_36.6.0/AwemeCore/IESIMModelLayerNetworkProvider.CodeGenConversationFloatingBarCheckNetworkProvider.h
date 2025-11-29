@class NSArray, NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenConversationFloatingBarCheckNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ barId;
}

@property (nonatomic, copy) NSArray *barId;
@property (nonatomic, retain) NSNumber *conversationShortId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithConversationShortId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
