@class AWESearchEventDispather, AWESearchBottomInteractorModel, AWEGeneralSearchVideoCardModel, NSDictionary, UIView, NSMutableArray, NSString;
@protocol AWESearchComponentProtocol, AWESearchContainerProtocol, AWESearchBottomInteractorComponentProvider;

@interface AWESearchBottomInteractorBusinessComponent : AWESearchComponent <AWESearchBottomInteractorBusinessComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchBottomInteractorModel *bottomModel;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (retain, nonatomic) id<AWESearchBottomInteractorComponentProvider> bottomComponent;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (void)configInteractorModelWith:(id)a0;

- (void)onThemeChanged;
- (id)addParams:(id)a0 toString:(id)a1;
- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void)updateWithChunkModel:(id)a0;
- (id)receiveProtocolList;
- (void)bottomInteractorBarDidTap:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)addObservers;

@end
