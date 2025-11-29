@class NSString;
@protocol AWEProfileEAViewHolderProtocol;

@interface AWEProfileExtensionAreaContainer_New : AWEShellViewController <AWEProfileEAContainerProtocol>

@property (retain, nonatomic) id<AWEProfileEAViewHolderProtocol> viewHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createControllerManager;
- (void)relaunchActionCheck;
- (BOOL)isShowingPopover;
- (id)profileContext;
- (BOOL)checkIsDisplayedOnScreenWidthCardType:(unsigned long long)a0;
- (void)insertRichContentWithCardType:(unsigned long long)a0 animated:(BOOL)a1;
- (void)removeRichContentWithCardType:(unsigned long long)a0;
- (void)configWithHeaderContext:(id)a0 extraInfoDict:(id)a1;
- (void)activeWithHeaderContext:(id)a0;
- (void)profilePageDidVerticallyScroll;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })layoutSize;
- (void)viewWillAppear:(BOOL)a0;
- (id)createContext;
- (void)viewDidLoad;

@end
