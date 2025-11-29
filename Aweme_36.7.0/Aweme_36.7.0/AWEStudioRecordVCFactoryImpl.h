@class NSString;

@interface AWEStudioRecordVCFactoryImpl : NSObject <AWEStudioRecordVCFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getAWERecordInspirationUtilsClass;
- (Class)getACCRecordViewControllerClass;
- (Class)getRecordInspirationCardCellClass;
- (id)buildRecordInspirationFeedDataProviderImplWithCategoryItem:(id)a0 detail:(id)a1;
- (id)buildRecorderServiceContainerWithParent:(id)a0;
- (id)buildRecordInspirationServiceImpl;
- (id)buildACCSideslipPropPanelVCWithServiceProvider:(id)a0 plugins:(id)a1;
- (id)buildAWEAsyncPropLoadingViewController;
- (Class)getAWEStickerPickerCategoryCellClass;
- (Class)getAWEStickerPickerStickerPropNameCellClass;
- (id)buildAWEStickerPickerLoadingView;
- (id)buildAWEStickerPickerErrorView;
- (id)buildAWEStickerPickerEmptyViewWithText:(id)a0;
- (id)buildAWEReshootVCWithInputData:(id)a0;
- (Class)getAWEStickerPickerPropAECellClass;
- (id)buildAWEStickerPickerErrorWithButtonView;
- (id)buildAWEStickerPickerViewWithUIConfig:(id)a0;
- (id)buildAWETabFilterVCWithConfig:(id)a0;
- (id)buildAWEStickerPickerSearchViewWithIsTab:(BOOL)a0;
- (id)buildAWEStickerPickerFavoriteView;
- (Class)getAWEStickerPickerOneClickFilmCellClass;
- (id)buildACCScanMultiCodeMiddleViewController;
- (id)buildAWEVideoRecorderTemplateWithPageConfig:(id)a0 andInputData:(id)a1;
- (Class)getAWEStickerApplyUserMentionHandlerClass;

@end
