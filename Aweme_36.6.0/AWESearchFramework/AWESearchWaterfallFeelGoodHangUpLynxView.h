@class NSString, AWESearchDynamicEngine, AWEGeneralSearchModel;
@protocol AWESearchWaterfallFeelGoodHangUpLynxViewDelegate;

@interface AWESearchWaterfallFeelGoodHangUpLynxView : UIView <AWESearchDynamicEngineDelegate, AWESearchWaterfallFeelGoodHangUpLynxViewInterface>

@property (retain, nonatomic) AWESearchDynamicEngine *engine;
@property (retain, nonatomic) AWEGeneralSearchModel *model;
@property (nonatomic) unsigned long long themeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESearchWaterfallFeelGoodHangUpLynxViewDelegate> feelgoodDelegate;

+ (double)heightForViewModel:(id)a0 width:(double)a1;
+ (id)questionnaireCardTypeName;
+ (id)searchLynxEngineWithModel:(id)a0 preferWidth:(double)a1;
+ (BOOL)isNeedShowQuestionnaireForModel:(id)a0;

- (void)lynxEngine:(id)a0 didFailLoadWithError:(id)a1;
- (void)lynxEngine:(id)a0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)handleUIThemeChangeNotification:(id)a0;
- (void)updateWithViewModel:(id)a0 attachToContainer:(id)a1;
- (void)clearFeelGoodLynxviewWithParams:(id)a0;
- (void)addFeelGoodLynxView;
- (void)detachFeelGoodLynxViewFromContainer;
- (void)attachFeelGoodLynxViewToContainer:(id)a0 lynxViewHeight:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateTheme;

@end
