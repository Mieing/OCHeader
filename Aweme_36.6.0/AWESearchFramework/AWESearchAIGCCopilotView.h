@class UIView, NSString, AWESearchCachalotGeneralContext, AWESearchAIGCBaseArrowBGView, UIImageView, UIButton, NSDictionary, AWESearchAIGCService, AWEGeneralSearchModel, UILabel;
@protocol AWEModernFeedCellContext;

@interface AWESearchAIGCCopilotView : UIViewController <AWEModernFeedCellControllerProtocol, AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) AWESearchAIGCBaseArrowBGView *bgView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *keyWordLabel;
@property (retain, nonatomic) UIView *switchBgView;
@property (retain, nonatomic) UIButton *firstItem;
@property (retain, nonatomic) UIButton *secondItem;
@property (retain, nonatomic) NSString *firstFoldId;
@property (retain, nonatomic) NSString *secondFoldId;
@property (retain, nonatomic) NSDictionary *trackDict;
@property (nonatomic) long long clickFlag;
@property (nonatomic) BOOL finishInitTab;
@property (retain, nonatomic) AWESearchCachalotGeneralContext *generalContext;
@property (retain, nonatomic) AWESearchAIGCService *aigcService;
@property (retain, nonatomic) AWEGeneralSearchModel *copilotModel;
@property (nonatomic) BOOL firstDataFlag;
@property (nonatomic) BOOL secondDataFlag;
@property (nonatomic) BOOL firstWordFlag;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)componentViewHeight;
+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)updateTheme:(unsigned long long)a0;
- (void)trackSearchResultClick:(id)a0;
- (void)aiCardRenderFirstWordWithSearchID:(id)a0;
- (void)aiSmartCanvasIsReadyWithSearchId:(id)a0;
- (void)aiChatOperationIsReadyWithSearchId:(id)a0;
- (void)trackSearchResultShow;
- (void)aiPostStartRequest;
- (void)reloadWithThemeChange;
- (void)setSecondItemUI;
- (void)setFirstItemUI;
- (void)trySwitchBgViewShow;
- (void)firstItemClick;
- (void)secondItemClick;
- (void)switchSecondButtonClick;
- (BOOL)aiCardUseClearColor;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)createUI;

@end
