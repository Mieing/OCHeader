@class NSString, NSArray, AWEAwemeModel, UIView, NSObject, AWESearchAnchorModel;
@protocol BDXViewContainerProtocol, AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEDouYinSouSuoGuideViewBarController : NSObject <BDXContainerLifecycleProtocol, AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *douyinSousuoAppGuideView;
@property (nonatomic) BOOL awemeShowEnable;
@property (retain, nonatomic) AWESearchAnchorModel *guideModel;
@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSString *lynxChannel;
@property (copy, nonatomic) NSArray *lynxCheckList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)cellDidFullyDisplay:(id)a0 forRowAtIndexPath:(id)a1;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarAddedToContainer:(id)a0;
- (BOOL)syncGetSearchAppBottomInstallInfoEnable;
- (BOOL)getSouSuoGuideSettingsEnable;
- (BOOL)getSouSuoGuideLocalReturnEnable;
- (id)getLynxContextWithAnchorModel:(id)a0;
- (id)getLynxConfigData;
- (void).cxx_destruct;
- (void)resetData;
- (Class)contextClass;
- (id)bottomBarView;

@end
