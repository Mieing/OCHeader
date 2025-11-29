@class NSNumber, NSDictionary;

@interface IESIMModelLayerNetworkProvider.CodeGenSHLInviteDealNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ bizExt;
}

@property (nonatomic, retain) NSNumber *conversationShortId;
@property (nonatomic, retain) NSNumber *conversationType;
@property (nonatomic, retain) NSNumber *shlInviteDealType;
@property (nonatomic, retain) NSNumber *noNeedGroupInviteTemporarily;
@property (nonatomic, copy) NSDictionary *bizExt;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
