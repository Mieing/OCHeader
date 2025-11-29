@class NSString, NSArray;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1FamiliarVideoDiverseDiggNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ itemId;
    void /* function */ diverseDiggList;
}

@property (nonatomic, copy) NSString *itemId;
@property (nonatomic, copy) NSArray *diverseDiggList;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
