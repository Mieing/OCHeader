@class NSNumber, NSArray;

@interface IESIMModelLayerNetworkProvider.CodeGenGetGroupIndicatorsNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ indicatorTypes;
}

@property (nonatomic, retain) NSNumber *conversationShortId;
@property (nonatomic, retain) NSNumber *period;
@property (nonatomic, copy) NSArray *indicatorTypes;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
