@class NSString, NSNumber, NSDictionary;

@interface AWEModelLayerIMNetworkProvider.CodeGenGroupDistributionSearchNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ source;
    void /* function */ query;
    void /* function */ cursor;
    void /* function */ bizExt;
}

@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, retain) NSNumber *limit;
@property (nonatomic, copy) NSDictionary *bizExt;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
