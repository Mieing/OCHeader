@class AWESearchEventDispather, AWESearchRightTopInfoModel, AWEGeneralSearchVideoCardModel, NSDictionary, UIView, NSString;
@protocol AWESearchComponentProtocol, AWESearchContainerProtocol, AWESearchRightTopInfoComponentProvider;

@interface AWESearchRightTopBusinessComponent : AWESearchComponent <AWESearchRightTopBusinessComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (retain, nonatomic) AWESearchRightTopInfoModel *rightTopModel;
@property (retain, nonatomic) id<AWESearchRightTopInfoComponentProvider> rightTopComponent;
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
+ (BOOL)shouldShowRightTopComponentWithModel:(id)a0;
+ (BOOL)shouldShowRightTopInfoComponent;
+ (id)configInteractorModelWith:(id)a0;

- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void)updateWithChunkModel:(id)a0;
- (void).cxx_destruct;
- (id)componentView;

@end
