@class AWESearchImagePlayerInteractorComponentModel, AWESearchEventDispather, NSDictionary, AWESearchImagePlayerInteractorComponentView, NSString, NSMutableArray;
@protocol AWESearchComponentProtocol, AWESearchImageProgressComponentProvider, AWESearchPlayerInteractorLeftBottomContainerComponentProvider, AWESearchPlayerInteractorBottomContainerComponentProvider, AWESearchRightTopContainerComponentProvider, AWESearchPlayerInteractorLeftTopContainerComponentProvider, AWESearchContainerProtocol, AWESearchImagePlayerInteractorComponentBroadCast;

@interface AWESearchImagePlayerInteractorComponent : AWESearchComponent <AWESearchImagePlayerInteractorComponentProvider>

@property (retain, nonatomic) AWESearchImagePlayerInteractorComponentModel *interactorModel;
@property (retain, nonatomic) AWESearchImagePlayerInteractorComponentView *contentView;
@property (retain, nonatomic) id<AWESearchPlayerInteractorLeftTopContainerComponentProvider> leftTopContainerComponent;
@property (retain, nonatomic) id<AWESearchRightTopContainerComponentProvider> rightTopContainerComponent;
@property (retain, nonatomic) id<AWESearchPlayerInteractorLeftBottomContainerComponentProvider> leftBottomContainerComponent;
@property (retain, nonatomic) id<AWESearchImageProgressComponentProvider> progressComponent;
@property (retain, nonatomic) id<AWESearchPlayerInteractorBottomContainerComponentProvider> bottomContainerComponent;
@property (retain, nonatomic) NSMutableArray *broadCastArray;
@property (weak, nonatomic) id<AWESearchImagePlayerInteractorComponentBroadCast> broadCast;
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

+ (id)getCreatSubComponentsArrayWithModel:(id)a0;

- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)receiveProtocolList;
- (void)p_loadComponent;
- (void)imageSlidView:(id)a0 didChangeAtIndex:(long long)a1 totalCount:(long long)a2;
- (void).cxx_destruct;
- (id)componentView;

@end
