@class NSDictionary;

@interface AWENearbyGrouponTransform : NSObject

@property (copy, nonatomic) NSDictionary *commonQueryData;

+ (id)currentFeedNodeFromPageViewModel:(id)a0;
+ (long long)currentFeedTabIDFromPageViewModel:(id)a0;

- (void)configTransformCommonQueryData:(id)a0;
- (id)transform:(id)a0 preListDataResponse:(id)a1 freshComponentNodeTagSet:(id)a2;
- (id)cardListForTransformerWithPageViewModel:(id)a0;
- (id)tabsModelFromPageViewModel:(id)a0;
- (id)transformToSettingsResponseFromPageViewModel:(id)a0;
- (id)transformToResourceResponseFromPageViewModel:(id)a0;
- (id)transformToHeaderToolResponseFromPageViewModel:(id)a0;
- (id)cardListInBodyFromPageViewModel:(id)a0 preListDataResponse:(id)a1 freshComponentNodeTagSet:(id)a2;
- (id)cardWithNodeTag:(id)a0 fromPageModel:(id)a1;
- (void).cxx_destruct;

@end
