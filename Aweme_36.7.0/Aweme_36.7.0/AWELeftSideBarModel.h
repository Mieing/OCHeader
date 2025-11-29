@class AWELeftSideBarConfig, NSString, NSArray, AWELeftSideBarConfigCommonBubbleModel, AWELeftSideBarCaptionBubbleConfigModel, AWELeftSideBarConfigLottieModel;

@interface AWELeftSideBarModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (nonatomic) long long themeMode;
@property (nonatomic) BOOL disableShow;
@property (copy, nonatomic) NSString *dataHash;
@property (nonatomic) long long hotSwitchType;
@property (copy, nonatomic) NSArray *supportAppearTabs;
@property (copy, nonatomic) NSArray *moduleModels;
@property (retain, nonatomic) NSArray *bottomModuleModels;
@property (retain, nonatomic) AWELeftSideBarConfigCommonBubbleModel *entryBubbleConfig;
@property (retain, nonatomic) AWELeftSideBarCaptionBubbleConfigModel *entryCaptionBubbleConfig;
@property (retain, nonatomic) AWELeftSideBarConfigLottieModel *entryLottieConfig;
@property (retain, nonatomic) NSArray *entryLottieConfigList;
@property (retain, nonatomic) AWELeftSideBarConfig *sideBarConfig;
@property (copy, nonatomic) NSString *serverLogID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleModelsJSONTransformer;
+ (id)bottomModuleModelsJSONTransformer;
+ (id)entryLottieConfigListJSONTransformer;
+ (id)entryBubbleConfigJSONTransformer;
+ (id)entryLottieConfigJSONTransformer;
+ (id)entryCaptionBubbleConfigJSONTransformer;
+ (id)sideBarConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)filterModuleItems:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)abstract;

@end
