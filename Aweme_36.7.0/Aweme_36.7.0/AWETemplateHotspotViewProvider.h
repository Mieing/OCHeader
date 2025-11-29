@class NSDictionary, NSString, AWETemplateBaseViewModel, AWEPageContext, UIView, AWETemplateBarModel, AWETemplateBarContext;
@protocol AWETemplateHotspotViewActionProtocol, AWETemplateViewProtocol;

@interface AWETemplateHotspotViewProvider : AWETemplateViewBaseProvider <AWETemplateViewActionProtocol, AWETemplateHotspotViewActionProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView<AWETemplateViewProtocol> *barView;
@property (retain, nonatomic) AWETemplateBaseViewModel<AWETemplateHotspotViewActionProtocol> *viewModel;
@property (retain, nonatomic) AWETemplateBarModel *barModel;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
+ (BOOL)canShowWhenCreateWithData:(id)a0;
+ (void)replaceSeparatorIfNeeded:(id)a0;
+ (Class)viewClass;

- (id)initWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
- (id)getSearchViewController;
- (long long)getPreloadResource;
- (id)getPrefetchTag;
- (void)resetSearchViewController;
- (void)viewDidTriggerByAddingQueryDict:(id)a0;
- (void)setTouchNoPreloadReason:(id)a0;
- (void)createSearchVCWithPreloadResource:(long long)a0;
- (void)configBarView;
- (id)createBarView;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)generateSchema;

@end
