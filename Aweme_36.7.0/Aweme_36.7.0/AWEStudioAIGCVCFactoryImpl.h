@class NSString;

@interface AWEStudioAIGCVCFactoryImpl : NSObject <AWEStudioAIGCVCFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildSaveDraftServiceWithServiceProvider:(id)a0;
- (id)buildACCAIGCUnifyLoadingViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withConfig:(id)a1;
- (id)buildAWEAICreateEffectsViewController;
- (id)buildAIGCAIAssetTaskHelper;
- (id)buildACCAIGCUnifyLoadingContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (Class)buildAIImageToLiveEditComponentClass;
- (Class)buildEffectComponentClass;
- (Class)buildUnifyLoadingComponentClass;
- (Class)aACCAIGCUnifyLoadingViewClass;
- (Class)buildRecordTimeConsumingPropComponentClass;
- (Class)buildRecordTimeConsumingPropFlowControlComponentClass;
- (Class)buildRecordTimeConsumingPropLoadingUnifyComponentClass;
- (Class)buildSelectComponentClass;
- (Class)buildAIUnifyLoadingComponentClass;
- (id)buildAWEAsyncQueueVCWithLoadingType:(long long)a0;
- (Class)buildLoraDetailInfoViewControllerClass;
- (id)buildLoraDetailInfoViewController;
- (id)buildTemplateTabContentProvider;
- (id)buildACCAIGCRecordVCWithDataSource:(id)a0 from:(unsigned long long)a1;
- (id)buildACCAIGCRecordListDataSourceWithProfileModel:(id)a0;
- (id)buildAIGCWaterfallViewController;
- (id)buildAlbumInspirationBottomViewWithText:(id)a0;
- (Class)getACCAIGCRecordViewControllerClass;
- (id)buildLoraKeyWordsPageWithOfficialKeyWordsList:(id)a0 hadSelectedKeyWordsList:(id)a1 loraInfoAvatarImagePath:(id)a2 hadLoraInfo:(BOOL)a3;
- (id)buildLoraKeyWordsPageWithOfficialKeyWordsModel:(id)a0 hadSelectedKeyWordsList:(id)a1 loraInfoAvatarImagePath:(id)a2 hadLoraInfo:(BOOL)a3;
- (id)buildTimeConsumingPropRequestPerformerWithEffectParams:(id)a0 resourcePath:(id)a1 repository:(id)a2 propModel:(id)a3;
- (id)buildACCAIGCPointsSwiftViewController:(long long)a0;

@end
