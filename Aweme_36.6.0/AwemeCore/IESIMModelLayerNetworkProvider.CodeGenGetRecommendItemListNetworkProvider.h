@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenGetRecommendItemListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ bizExtJson;
}

@property (nonatomic, retain) NSNumber *scene;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, copy) NSString *bizExtJson;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
