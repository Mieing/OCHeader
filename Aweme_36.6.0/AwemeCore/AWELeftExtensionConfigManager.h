@class NSString, NSDictionary, NSArray, AFDLeftExtensionPopoverSheetView, NSMutableArray;

@interface AWELeftExtensionConfigManager : NSObject <AWELeftExtensionConfigManagerProtocol>

@property (retain, nonatomic) AFDLeftExtensionPopoverSheetView *leftPopoverView;
@property (copy, nonatomic) NSDictionary *leftExtensionsConfig;
@property (copy, nonatomic) NSString *extensionIcon;
@property (copy, nonatomic) NSArray *extensionList;
@property (retain, nonatomic) NSMutableArray *extensionCellConfigList;
@property (nonatomic) BOOL isPopoverViewShowing;
@property (nonatomic) BOOL shouldPresentWithTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isLeftExtensionPopoverSheetShowing;
- (id)getLeftExtensionsConfigListForPage:(id)a0;
- (BOOL)enableHomepageLeftExtension;
- (void)recordLeftExtensionPopoverCellYellowDotClickedWithItemType:(id)a0 pageTab:(id)a1;
- (void)trackForEnterScanWithEnterFrom:(id)a0 previousPage:(id)a1;
- (unsigned long long)getLeftExtensionIconType;
- (id)getLeftExtensionConfigModelArray;
- (void)configLeftExtensionParams;
- (void)trackForPlusEntranceClick:(id)a0;
- (id)configAndShowPopoverActionSheetWithItemType:(id)a0 forView:(id)a1 currentPage:(id)a2;
- (void)trackForPlusCellShowWithType:(id)a0 page:(id)a1;
- (void)didClickLiveTitle;
- (void)p_transferToMultiTabEditPage;
- (void)trackForStartGroupWithEnterFrom:(id)a0;
- (void)trackForPlusCellClickWithType:(id)a0 page:(id)a1;
- (id)p_getHomepageLeftExtensionsConfig;
- (void)p_removeConfigWithItemType:(id)a0 forConfig:(id)a1;
- (id)getLeftExtensionIcon;
- (BOOL)isPopoverYellowDotClickedWithItemType:(id)a0 pageTab:(id)a1;
- (void)showLeftExtensionEntranceActionForView:(id)a0 currentPage:(id)a1;
- (void)dismissLeftExtensionPopoverView;
- (void).cxx_destruct;
- (id)init;

@end
