@class BDSCBackgroundUIModel, NSString, BDSCFeedBackUIModel, BDByteScreenCastTimeoutSetting, NSMutableArray, BDSCButtonUIModel;

@interface BDSCSearchListUIModel : NSObject

@property (retain, nonatomic) BDSCBackgroundUIModel *verticalBackground;
@property (retain, nonatomic) BDSCBackgroundUIModel *horizonBackground;
@property (copy, nonatomic) NSString *helpSchema;
@property (retain, nonatomic) BDByteScreenCastTimeoutSetting *searchTimeoutSetting;
@property (retain, nonatomic) BDSCFeedBackUIModel *feedBackModel;
@property (copy, nonatomic) NSString *castScreenIcon;
@property (retain, nonatomic) BDSCButtonUIModel *deviceSelectionButton;
@property (retain, nonatomic) NSMutableArray *searchResultPanelArray;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)searchResultPanelWithResult:(unsigned long long)a0 network:(unsigned long long)a1;
- (id)localConfigSearchList;
- (void)configSearchResultPanelWithArray:(id)a0;
- (void)fillSearchResultPanelWithDefaultArray;
- (void)checkSearchResultPanelArray;
- (void)setupNewSearchPanelStyleInLiveScene;
- (void)setupNewSearchPanelSceneUnification;
- (void)checkFailedSearchResultPanel:(id)a0;
- (void)checkSucceedSearchResultPanel:(id)a0;
- (void)configBannersWithSearchResultPanel:(id)a0;
- (id)localConfigResultBanner;
- (void).cxx_destruct;

@end
