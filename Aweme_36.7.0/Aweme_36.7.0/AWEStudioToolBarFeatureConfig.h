@class NSDictionary, NSArray, NSNumber;

@interface AWEStudioToolBarFeatureConfig : AWEStudioComposerBaseFeatureConfig

@property (retain, nonatomic) NSDictionary *itemString2ContextValueDict;
@property (nonatomic) long long exposedItemCount;
@property (copy, nonatomic) NSArray *featureItemSortOrderStringArray;
@property (copy, nonatomic) NSDictionary *customItemDict;
@property (readonly, copy, nonatomic) NSArray *featureItemSortOrder;
@property (copy, nonatomic) NSNumber *forceExpand;

- (void).cxx_destruct;

@end
