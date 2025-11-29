@class AWEStudioComposerPublishFooterFeature, AWEStudioComposerPublishNaviFeature, AWEStudioComposerPublishUndefinedFeature, AWEStudioComposerPublishPOIFeature, AWEStudioComposerPublishHashTagRecommendFeature, AWEStudioComposerPublishBasicFeature, AWEStudioComposerPublishCoverFeature, AWEStudioComposerPublishPrivacySettingFeature, AWEStudioComposerPublishRequiredFeature, AWEStudioComposerPublishInputFeature;

@interface AWEStudioComposerPublishPageConfig : AWEStudioComposerBasePageConfig

@property (readonly, nonatomic) AWEStudioComposerPublishBasicFeature *basicFeature;
@property (readonly, nonatomic) AWEStudioComposerPublishNaviFeature *naviFeature;
@property (readonly, nonatomic) AWEStudioComposerPublishFooterFeature *footerFeature;
@property (readonly, nonatomic) AWEStudioComposerPublishCoverFeature *coverFeature;
@property (readonly, nonatomic) AWEStudioComposerPublishInputFeature *inputFeature;
@property (readonly, nonatomic) AWEStudioComposerPublishHashTagRecommendFeature *hashTagRecommendFeature;
@property (readonly, nonatomic) AWEStudioComposerPublishPOIFeature *poiFeature;
@property (readonly, nonatomic) AWEStudioComposerPublishUndefinedFeature *undefinedFeature;
@property (readonly, nonatomic) AWEStudioComposerPublishRequiredFeature *coreFeature;
@property (readonly, nonatomic) AWEStudioComposerPublishPrivacySettingFeature *privacySettingFeature;

- (void).cxx_destruct;

@end
