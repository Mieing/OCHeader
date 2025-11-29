@class IESECMallCategoryTabBubbleInfo, NSString, IESECMallCategoryTabContainerrSkinConfig, IESECMallCategoryTabAnimationInfoModel, NSArray, IESECMallCategoryTabGuideInfo, IESECMallCategoryTabIconModel;

@interface IESECMallCategoryTabInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *moduleID;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *dockedID;
@property (nonatomic) unsigned long long tabType;
@property (retain, nonatomic) IESECMallCategoryTabIconModel *iconConfig;
@property (retain, nonatomic) IESECMallCategoryTabAnimationInfoModel *animationInfo;
@property (nonatomic) unsigned long long containerType;
@property (nonatomic) unsigned long long containerNativeType;
@property (retain, nonatomic) IESECMallCategoryTabContainerrSkinConfig *skinConfig;
@property (copy, nonatomic) NSString *BTMB;
@property (nonatomic) BOOL disableRefresh;
@property (copy, nonatomic) NSArray *supportResource;
@property (retain, nonatomic) IESECMallCategoryTabGuideInfo *tabGuideIcon;
@property (retain, nonatomic) IESECMallCategoryTabBubbleInfo *tabBubbleInfo;
@property (nonatomic) BOOL isHeterization;
@property (nonatomic) BOOL isAnimation;
@property (nonatomic) BOOL isBubbleShowed;
@property (nonatomic) BOOL isReddotShowed;
@property (nonatomic) BOOL isAnchorShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultRecommendTabInfo;
+ (id)animationInfoJSONTransformer;
+ (id)skinConfigJSONTransformer;
+ (id)supportResourceJSONTransformer;
+ (id)tabGuideIconJSONTransformer;
+ (id)tabBubbleInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isRecommendTab;
- (BOOL)supportMarketingType:(long long)a0;
- (BOOL)isIndustryTab;
- (BOOL)isActivityTab;
- (BOOL)isChannelTab;
- (void).cxx_destruct;

@end
