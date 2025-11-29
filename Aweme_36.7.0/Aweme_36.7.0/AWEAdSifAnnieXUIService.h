@class AnnieXNavigataionBarItem, NSString, UIView, UILabel;
@protocol AnnieXUIServiceProtocol;

@interface AWEAdSifAnnieXUIService : NSObject <AnnieXUIServiceProtocol>

@property (retain, nonatomic) id<AnnieXUIServiceProtocol> defaultService;
@property (retain, nonatomic) AnnieXNavigataionBarItem *moreBtn;
@property (retain, nonatomic) AnnieXNavigataionBarItem *reportBtn;
@property (retain, nonatomic) AnnieXNavigataionBarItem *surveyBtn;
@property (retain, nonatomic) AnnieXNavigataionBarItem *commentBtn;
@property (weak, nonatomic) UIView *naviBar;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UILabel *titleTextLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (BOOL)useAnnieXNavigationBarWithURL:(id)a0 context:(id)a1;
+ (BOOL)shouldUserStandardLongPressMenu:(id)a0;
+ (id)monitorCommonParamsWithContainer:(id)a0 context:(id)a1;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)imageWithString:(id)a0;
+ (void)registerProtocolImp;
+ (unsigned long long)serviceType;

- (id)navigationLeftViewItemsWithContext:(id)a0 containerVC:(id)a1;
- (void)onCreateNavigationContentView:(id)a0 navBarView:(id)a1 context:(id)a2 containerVC:(id)a3;
- (id)navigationRightViewItemsWithContext:(id)a0 containerVC:(id)a1;
- (void)onNavigationUpdateContentView:(id)a0 title:(id)a1 titleColor:(id)a2 context:(id)a3 containerVC:(id)a4;
- (id)onNavigationUpdateLeftItemsWithNavigationBarItems:(id)a0 context:(id)a1 containerVC:(id)a2;
- (id)onNavigationUpdateRightItemsWithNavigationBarItems:(id)a0 context:(id)a1 containerVC:(id)a2;
- (id)webMenusWithRootMenu:(id)a0 webView:(id)a1 schemaParams:(id)a2;
- (void)onLongPressImageInWebView:(id)a0 schemaParams:(id)a1 imageURL:(id)a2;
- (id)wrapperDefaultNavigationBarItems:(id)a0 container:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
