@class AWEECMultiMallContainerConfig, NSString, NSDictionary, UIViewController;
@protocol AWEECMultiMallNativeVCProtocol, AWEECGeneralMallViewControllerProtocol;

@interface AWEECGeneralNativeViewController : UIViewController <AWEECMultiMallNativeVCContext, AWEECMultiMallChannelContainerProtocol>

@property (weak, nonatomic) id<AWEECGeneralMallViewControllerProtocol> delegate;
@property (retain, nonatomic) UIViewController<AWEECMultiMallNativeVCProtocol> *nativeVC;
@property (retain, nonatomic) AWEECMultiMallContainerConfig *config;
@property (copy, nonatomic) NSString *openTime;
@property (nonatomic) BOOL isViewVisible;
@property (copy, nonatomic) NSDictionary *containerTypeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEECMultiMallDOUYINLGAdapterClass;

- (id)referString;
- (id)btmPageBID;
- (void)updateMallConfig:(id)a0;
- (id)tabNativeVCWithConfig:(id)a0 context:(id)a1;
- (id)aAWEECMultiMallDOUYINLGAdapter;
- (void)enterChannelWithModel:(id)a0;
- (void)leaveChannelWithModel:(id)a0;
- (BOOL)isContainerVisible;
- (void)refreshChannelIfNeededWithCompletion:(id /* block */)a0 withActively:(BOOL)a1;
- (id)defaultEnterFrom;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setUpUI;
- (id)initWithConfig:(id)a0 delegate:(id)a1;
- (id)pageName;

@end
