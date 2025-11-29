@class NSString, NSArray, UIView, AWEVideoPublishViewModel;
@protocol CAKAlbumPreviewPageBottomViewProtocol, ACCSelectedAssetsBottomViewProtocol, CAKAlbumNavigationViewProtocol;

@interface ACCAlbumConfigure : NSObject

@property (nonatomic) BOOL enableSearch;
@property (nonatomic) BOOL enableRecommendAssetsTab;
@property (retain, nonatomic) NSString *recommendTabTitle;
@property (retain, nonatomic) NSString *recommendText;
@property (retain, nonatomic) NSArray *recommendKeyWords;
@property (nonatomic) long long recommendType;
@property (nonatomic) long long recommendEnterFrom;
@property (copy, nonatomic) NSString *defaultTabIdentifier;
@property (nonatomic) BOOL enableMixedAssetsTab;
@property (nonatomic) BOOL enablePhotoAssetsTab;
@property (nonatomic) BOOL enableVideoAssetsTab;
@property (nonatomic) BOOL enableFavoriteTab;
@property (nonatomic) BOOL enableLivePhoto;
@property (nonatomic) BOOL enablePreview;
@property (nonatomic) BOOL enableMultiSelect;
@property (nonatomic) BOOL enableSwitchMultiSelect;
@property (nonatomic) BOOL scrollToBottom;
@property (nonatomic) long long columnNumber;
@property (nonatomic) long long themeType;
@property (nonatomic) unsigned long long checkMarkSelectedStyle;
@property (nonatomic) unsigned long long maxAssetsSelectionCount;
@property (nonatomic) unsigned long long minAssetsSelectionCount;
@property (copy, nonatomic) id /* block */ maxAssetsSelectionToast;
@property (copy, nonatomic) NSArray *extensionList;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ albumWillPresentBlock;
@property (copy, nonatomic) id /* block */ customCellCreator;
@property (copy, nonatomic) id /* block */ customCellListCreator;
@property (copy, nonatomic) NSArray *defaultSelectedAssets;
@property (copy, nonatomic) id /* block */ completeSelectionHandler;
@property (copy, nonatomic) id /* block */ needFetchAssetFromICloud;
@property (copy, nonatomic) id /* block */ shouldSelectAssetHandler;
@property (nonatomic) BOOL forceUseShouldSelectHandler;
@property (nonatomic) BOOL shouldHideBottomViewWhenNotSelect;
@property (retain, nonatomic) UIView<ACCSelectedAssetsBottomViewProtocol> *customBottomView;
@property (retain, nonatomic) UIView<CAKAlbumNavigationViewProtocol> *customNavigationView;
@property (copy, nonatomic) id /* block */ updateNextBtnHandler;
@property (retain, nonatomic) UIView<CAKAlbumPreviewPageBottomViewProtocol> *customBottomViewForPreviewPage;
@property (copy, nonatomic) NSString *customBottomViewTitle;
@property (nonatomic) BOOL presentPreviewPageOnAlbumVC;
@property (nonatomic) BOOL enableLivePhotoTagForPhotoTab;
@property (copy, nonatomic) NSString *customShootWay;
@property (nonatomic) BOOL disableAigcExtensionConfigSync;
@property (retain, nonatomic) AWEVideoPublishViewModel *originUploadPublishModel;
@property (nonatomic) BOOL hideAIAssetEntrance;

+ (id)createDefaultConfigure;
+ (id)createConfigureWith:(id)a0;

- (id)syncConfigure:(id)a0;
- (id)generateInputeData;
- (void).cxx_destruct;

@end
