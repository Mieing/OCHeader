@class NSNumber, NSString;

@interface AWEModelLayerShowNetworkProvider.CodeGenpaidLiveGetItemsNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ cursor;
}

@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, retain) NSNumber *userId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
