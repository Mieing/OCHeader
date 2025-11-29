@class NSString, NSNumber;

@interface AWEModelLayerShowNetworkProvider.CodeGenpaidGetAdvMomentNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ playletId;
    void /* function */ ceCurrentGroupId;
    void /* function */ tags;
    void /* function */ newTags;
    void /* function */ extra;
}

@property (nonatomic, copy) NSString *playletId;
@property (nonatomic, copy) NSString *ceCurrentGroupId;
@property (nonatomic, copy) NSString *tags;
@property (nonatomic, copy) NSString *newTags;
@property (nonatomic, retain) NSNumber *networkType;
@property (nonatomic, copy) NSString *extra;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
