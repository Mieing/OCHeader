@class UIStackView, AWEAwemeModel, UIView, AWEPlayletSchemaModel, NSString, NSDictionary, AWEDiscoverDPlayletBottomSelectView, NSObject;
@protocol AWEShowQuickAccessEntryContentViewProtocol, AWEDiscoverDPlayletBottomViewDelegate, AWEShowQuickAccessEntryHubProtocol, AWEAwemeNewDetailTableContextProtocol;

@interface AWEDiscoverDPlayletBottomView : UIView <AWEShowQuickAccessEntryHubDelegate, AWEDiscoverDPlayletBottomViewProtocol>

@property (retain, nonatomic) UIView *moreBackgroundView;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) NSDictionary *currentExtraParam;
@property (weak, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) id<AWEShowQuickAccessEntryHubProtocol> quickAccessEntryHub;
@property (weak, nonatomic) UIView<AWEShowQuickAccessEntryContentViewProtocol> *quickAccessEntryContentView;
@property (weak, nonatomic) id<AWEDiscoverDPlayletBottomViewDelegate> delegate;
@property (retain, nonatomic) AWEDiscoverDPlayletBottomSelectView *selectView;
@property (retain, nonatomic) NSObject<AWEAwemeNewDetailTableContextProtocol> *context;
@property (retain, nonatomic) AWEPlayletSchemaModel *schemaModel;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEDiscoverDPlayletBottomViewAdapterClass;

- (void)configureUI;
- (double)bottomViewHeight;
- (id)aAWEDiscoverDPlayletBottomViewAdapter;
- (void)setupQuickAccessEntryHub;
- (BOOL)shouldUseQuickAccessHub;
- (void)updateBottomTitleWithModel:(id)a0 extraParams:(id)a1 needUpdateBottomTittleModel:(BOOL)a2;
- (id)buildQuickAccessEntryContextWithAweme:(id)a0;
- (void)updateSelectViewForEntry:(id)a0 context:(id)a1;
- (void)onSelectViewClicked;
- (void)quickAccessEntryHub:(id)a0 displayEntry:(id)a1 context:(id)a2;
- (void)updateBottomTitleWithModel:(id)a0 extraParams:(id)a1;
- (void)determineQuickAccessActiveEntryWithAweme:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
