@class AWESearchEventDispather, NSString, AWESearchPlayerInteractorTitleContainerComponentModel, NSDictionary, UIView;
@protocol AWESearchComponentProtocol, AWESearchTitleComponentProvider, AWESearchContainerProtocol;

@interface AWESearchPlayerInteractorTitleContainerComponent : AWESearchComponent <AWESearchPlayerInteractorTitleContainerComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchPlayerInteractorTitleContainerComponentModel *titleContainerModel;
@property (retain, nonatomic) id<AWESearchTitleComponentProvider> titleComponent;
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

- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void).cxx_destruct;
- (id)componentView;

@end
