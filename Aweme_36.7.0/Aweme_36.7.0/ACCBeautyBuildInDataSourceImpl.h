@class NSArray, NSString;

@interface ACCBeautyBuildInDataSourceImpl : NSObject <ACCBeautyBuildInDataSource>

@property (copy, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildInCategories;
- (id)iconForItem:(id)a0;
- (void).cxx_destruct;

@end
