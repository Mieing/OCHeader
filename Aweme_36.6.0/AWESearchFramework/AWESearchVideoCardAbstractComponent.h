@class AWEAwemeModel, UIView, AWEModernFeedContentFrame, NSString, UIPanGestureRecognizer, NSMutableArray, AWEModernFeedContentView, AWEGeneralSearchVideoCardModel;

@interface AWESearchVideoCardAbstractComponent : AWESearchComponent <AWESearchVideoCardAbstractComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEModernFeedContentView *contentAbstractView;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (nonatomic) BOOL isCurrentComponentViewShow;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEModernFeedContentFrame *abstractPresentFrame;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;

- (id)commonTrackParams;
- (void)trackShow;
- (void)updateWithTheme:(long long)a0;
- (void)trackClick;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidAppear:(BOOL)a0;
- (void)componentViewDidDisappear:(BOOL)a0;
- (id)receiveProtocolList;
- (void)setModelOnly:(id)a0;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)updateSubviewsContent;
- (void)updatePresentFrame;
- (void)tapDescView;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;

@end
