@class AWEUserEnterpriseTab, NSString, AWEShowProgrammeTabModel, AWEProfileAggregationTabModel, AWEUserPrivateTab, AWETTUserShopTab, AWEProfileBrandTabModel;

@interface AWEUserTabSetting : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUserEnterpriseTab *enterpriseTab;
@property (retain, nonatomic) AWEUserPrivateTab *privateTab;
@property (retain, nonatomic) AWETTUserShopTab *ttUserShopTab;
@property (retain, nonatomic) AWEShowProgrammeTabModel *showProgrammeTabModel;
@property (nonatomic) BOOL hideLikeTab;
@property (retain, nonatomic) AWEProfileBrandTabModel *brandTab;
@property (retain, nonatomic) AWEProfileAggregationTabModel *aggregationTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enterpriseTabJSONTransformer;
+ (id)showProgrammeTabModelJSONTransformer;
+ (id)brandTabJSONTransformer;
+ (id)aggregationTabJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
