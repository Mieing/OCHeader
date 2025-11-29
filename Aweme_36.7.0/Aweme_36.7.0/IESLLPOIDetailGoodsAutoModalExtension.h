@interface IESLLPOIDetailGoodsAutoModalExtension : IESLLPOIBaseExtension

@property (nonatomic) BOOL showGrouponModelView;
@property (nonatomic) BOOL hasShowGroupon;
@property (nonatomic) BOOL hasViewDidAppear;
@property (nonatomic) BOOL hasDidLoadPageModel;

- (void)configWithRouterParamDict:(id)a0;
- (id)poiDetail;
- (void)didLoadPageModel:(id)a0;
- (id)constData;
- (BOOL)showGrouponAfterPOIDidAppear;
- (id)generalContext;
- (BOOL)canOpenGoodsDetailStraightAway;
- (void)openGrouponModalView;
- (void)viewDidAppear;

@end
