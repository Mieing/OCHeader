@class AWESearchFeedArticleViewModel, NSString, AWEAwemeModel, NSDictionary, AWESearchDynamicEngine;
@protocol AWESearchFeedArticleViewControllerDelegate;

@interface AWESearchFeedArticleViewController : UIViewController <AWESearchDynamicEngineDelegate, AWESearchFeedArticleViewControllerProtocol>

@property (retain, nonatomic) AWESearchDynamicEngine *engine;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) AWESearchFeedArticleViewModel *viewModel;
@property (nonatomic) BOOL lynxDidMount;
@property (retain, nonatomic) AWEAwemeModel *reservedModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESearchFeedArticleViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (id)aAWEPadModuleAdapter;
- (id)aAWEPadBizUIAdapter;
- (void)lynxEngineDidMount:(id)a0;
- (void)lynxEngine:(id)a0 didFailLoadWithError:(id)a1;
- (void)updatePlaybackStatus:(long long)a0;
- (void)updateContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forModel:(id)a1;
- (id)articleCustomGlobalProps;
- (void)sendContentInsetsEvent:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)reloadLynxViewWithModel:(id)a0 forceHasMore:(BOOL)a1;
- (id)removeCardErrorCodeWhiteLists;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)prepareForReuse;
- (void)viewDidLoad;
- (void)updateModel:(id)a0;

@end
