@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenGetB2CSuggestQuestionNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ enterConversationExt;
    void /* function */ adTitle;
}

@property (nonatomic, retain) NSNumber *bUid;
@property (nonatomic, copy) NSString *enterConversationExt;
@property (nonatomic, copy) NSString *adTitle;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithEnterConversationExt:(id)a0 adTitle:(id)a1 bUid:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
