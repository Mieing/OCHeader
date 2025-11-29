@class NSString, NSArray;

@interface PTYFeatureGroupQuery : NSObject

@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSArray *featureQuerys;

- (struct unique_ptr<pitaya::FeatureGroupQuery, std::default_delete<pitaya::FeatureGroupQuery>> { struct __compressed_pair<pitaya::FeatureGroupQuery *, std::default_delete<pitaya::FeatureGroupQuery>> { struct FeatureGroupQuery *x0; } x0; })getFeatureGroupQuery;
- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0;
- (void)addQuery:(id /* block */)a0;

@end
