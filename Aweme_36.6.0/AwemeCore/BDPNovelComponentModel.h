@class BDPUniqueID, NSString, UIViewController, BDPNovelPerformanceHelper, BDPNovelPerformanceConfig, BDPNovelRenderConfig, BDPNovelContentMeta;
@protocol BDPNovelDataDelegate, BDPNovelEventDelegate, BDPNovelInsertElementDelegate, BDPNovelManageFlowAdPolicyDelegate;

@interface BDPNovelComponentModel : NSObject

@property (nonatomic) BOOL managedFlowAdPolicyEnable;
@property (copy, nonatomic) NSString *bookId;
@property (retain, nonatomic) BDPNovelRenderConfig *renderConfig;
@property (retain, nonatomic) BDPNovelContentMeta *targetContentMeta;
@property (retain, nonatomic) BDPNovelPerformanceConfig *performanceConfig;
@property (weak, nonatomic) id<BDPNovelDataDelegate> dataDelegate;
@property (weak, nonatomic) id<BDPNovelEventDelegate> eventDelegate;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *componentID;
@property (weak, nonatomic) UIViewController *controller;
@property (retain, nonatomic) BDPNovelPerformanceHelper *performHelper;
@property (nonatomic) BOOL enableLayoutTrack;
@property (weak, nonatomic) id<BDPNovelInsertElementDelegate> insertDelegate;
@property (nonatomic) BOOL lcpReached;
@property (nonatomic) BOOL showTweakInfo;
@property (weak, nonatomic) id<BDPNovelManageFlowAdPolicyDelegate> manageFlowAdPolicyDelegate;
@property (retain, nonatomic) NSString *forceAdUnitId;
@property (retain, nonatomic) NSString *normalAdUnitId;
@property (nonatomic) long long defaultPageGap;
@property (nonatomic) long long defaultPreloadGap;
@property (nonatomic) long long nonManagedPreloadGap;

- (BOOL)isReadToRender;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nativeBackBtnFrame;
- (void)updateManageFlowAdService:(BOOL)a0;
- (void).cxx_destruct;
- (id)performanceStatistics;

@end
