@class NSString, AWETeenModeFastEntryButton;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNaviFastEntryItemController : NSObject <AWEProfileNavigationItemControllerProtocol>

@property (retain, nonatomic) AWETeenModeFastEntryButton *fastEntryButton;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (BOOL)canShow;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)profileContext;
- (void)fastEntryButtonTapped:(id)a0;
- (BOOL)enableTeenNewSearch;
- (id)navigationItemView;
- (void)handleComplianceSettingFinishedNotification:(id)a0;
- (void)handleFastEntryChangedNotification:(id)a0;
- (void)enterTeenMode;
- (void)refreshButtonWithIconOnly;
- (void)applicationWillEnterForeground:(id)a0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;

@end
