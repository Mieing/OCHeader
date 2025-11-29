@class WCHeaderActionSheet, NSArray, NSString, WAMapAppNavigateItem, NSDictionary, NSMutableArray, UIViewController;
@protocol WANavigateLogicControllerDelegate;

@interface WANavigateLogicController : MMObject <WCActionSheetDelegate>

@property (retain, nonatomic) NSArray *allMaps;
@property (retain, nonatomic) NSArray *displayMaps;
@property (retain, nonatomic) WAMapAppNavigateItem *navigateFrom;
@property (retain, nonatomic) WAMapAppNavigateItem *navigateTo;
@property (weak, nonatomic) UIViewController *showVC;
@property (retain, nonatomic) NSMutableArray *buttonCustomViewModels;
@property (retain, nonatomic) WCHeaderActionSheet *actionSheet;
@property (nonatomic) BOOL isHasExpandView;
@property (nonatomic) BOOL isTencentMapInstalled;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSDictionary *toPoiIdDic;
@property (nonatomic) unsigned long long preferAppType;
@property (weak, nonatomic) id<WANavigateLogicControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initAllMaps;
- (id)getUrlSchemeUsingMap:(id)a0;
- (id)getOpenButtonTitle:(id)a0;
- (id)getInstallButtonTitle:(id)a0;
- (id)selectDisplayNavigateMaps;
- (BOOL)showOpenMapAppMenuFrom:(id)a0 To:(id)a1 InVC:(id)a2;
- (void)addCancelViewToCustomViews;
- (void)addExpandViewToCustomViews;
- (void)addPreferAppViewToCustomViews:(id)a0;
- (void)addAllDisplayMapsToCustomViews;
- (id)getDisplayMapsJointName;
- (id)getPreferMapItem;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)navigateUsingMap:(id)a0;
- (void)report12809:(long long)a0 clickItem:(id)a1 exposeMapList:(id)a2;
- (void).cxx_destruct;

@end
