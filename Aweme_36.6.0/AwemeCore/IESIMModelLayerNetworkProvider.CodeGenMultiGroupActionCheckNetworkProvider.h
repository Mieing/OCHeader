@class NSArray, NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenMultiGroupActionCheckNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ actionCheckTypes;
}

@property (nonatomic, copy) NSArray *actionCheckTypes;
@property (nonatomic, retain) NSNumber *actionCheckSource;
@property (nonatomic, retain) NSNumber *groupType;
@property (nonatomic, retain) NSNumber *conversationShortId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
