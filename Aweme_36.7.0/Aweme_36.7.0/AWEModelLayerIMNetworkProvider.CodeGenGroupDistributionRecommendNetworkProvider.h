@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEModelLayerIMNetworkProvider.CodeGenGroupDistributionRecommendNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ source;
    void /* function */ categoryId;
    void /* function */ lastGroupIds;
    void /* function */ bizExt;
}

@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *categoryId;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *index;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, copy) NSArray *lastGroupIds;
@property (nonatomic, copy) NSDictionary *bizExt;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
