@class NSString, NSArray, RACSignal, AWEVideoPublishViewModel, AWEComposerBeautyEffectWrapper, AWEComposerBeautyEffectCategoryWrapper, NSDictionary, AWEComposerBeautyEffectViewModel;
@protocol ACCBeautyBuildInDataSource;

@interface AWEComposerBeautyViewModel : NSObject

@property (readonly, nonatomic) RACSignal *currentCategorySignal;
@property (readonly, nonatomic) RACSignal *selectedEffectSignal;
@property (copy, nonatomic) NSArray *filteredCategories;
@property (copy, nonatomic) NSString *businessName;
@property (retain, nonatomic) AWEComposerBeautyEffectCategoryWrapper *currentCategory;
@property (retain, nonatomic) AWEComposerBeautyEffectViewModel *effectViewModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) BOOL isPrimaryPanelEnabled;
@property (nonatomic) BOOL isBeautyDefaultResourceEnabled;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *selectedEffect;
@property (copy, nonatomic) NSDictionary *referExtra;
@property (retain, nonatomic) id<ACCBeautyBuildInDataSource> dataSource;
@property (copy, nonatomic) id /* block */ fetchDataBlock;
@property (copy, nonatomic) id /* block */ downloadStatusChangedBlock;
@property (nonatomic) BOOL prefersEnableBeautyCategorySwitch;
@property (nonatomic) BOOL enableSideSwitch;
@property (nonatomic) BOOL isSideBeautySwitchOn;
@property (nonatomic) double loadBeautyDataStartTime;

- (void)fetchBeautyEffects;
- (id)initWithEffectViewModel:(id)a0 businessName:(id)a1 publishModel:(id)a2;
- (void)enableBeautyDefaultResource;
- (void)resetAllComposerBeautyEffects;
- (BOOL)enableBeautyCategorySwitch;
- (BOOL)isDefaultStatusCategory:(id)a0;
- (BOOL)shouldDisableResetButton;
- (void)resetComposerCategoryAllItemToZero:(id)a0;
- (void)resetCategorySwitchState;
- (void)resetAllComposerBeautyEffectsOfCategory:(id)a0;
- (void)p_downloadStatusChanged:(id)a0;
- (id)p_findEffect:(id)a0 withEffectIdentifier:(id)a1;
- (void)p_resetAppliedChildEffectForEffect:(id)a0;
- (void)p_resetRatioForEffect:(id)a0;
- (void)p_resetDefaultEffectForCategory:(id)a0;
- (void)p_clearRatioForEffect:(id)a0;
- (id)p_defaultAppliedEffectForCategory:(id)a0;
- (void)enablePrimaryPanel;
- (void).cxx_destruct;
- (void)dealloc;

@end
