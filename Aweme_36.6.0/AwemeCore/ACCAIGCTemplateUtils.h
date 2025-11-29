@class NSString;

@interface ACCAIGCTemplateUtils : NSObject <AWEStudioAIGCTemplateUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowUnifyLoadingAndApplyTemplateModel:(id)a0 hasAIGCCache:(BOOL)a1;
+ (id)preferredFallbackWaitTimeTipForTemplate:(id)a0 isSelectedLoraGenerating:(BOOL)a1;
+ (long long)getTemplateSettingTimeConsumingWith:(id)a0 isSelectedLoraGenerating:(BOOL)a1;
+ (BOOL)templateIsSupportUnifyloadingWithTemplate:(id)a0;
+ (id)getSaveDraftTrackDictWithPublishModel:(id)a0 templateModel:(id)a1;
+ (BOOL)isAsyncRequestWithTemplate:(id)a0;
+ (id)addAigcTemplateParamsTo:(id)a0 publishModel:(id)a1;
+ (id)getAiTemplateEnterFormWithEnterMethod:(id)a0;
+ (long long)currentLoadingViewTypeWith:(id)a0 isSelectedLoraGenerating:(BOOL)a1;
+ (id)getFollowShootParamWithPublishModel:(id)a0 templateModel:(id)a1;
+ (void)reStoreResourceWithPublishModel:(id)a0;


@end
