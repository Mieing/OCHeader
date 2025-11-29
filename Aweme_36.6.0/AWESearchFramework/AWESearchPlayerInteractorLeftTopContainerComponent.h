@class AWESearchEventDispather, NSString, NSDictionary, AWESearchPlayerInteractorLeftTopContainerComponentModel, NSMutableArray, UIView;
@protocol AWESearchCustomTagComponentProvider, AWESearchCoverTagComponentProvider, AWESearchPaidTagComponentProvider, AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchPlayerInteractorLeftTopContainerComponent : AWESearchComponent <AWESearchPlayerInteractorLeftTopContainerComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) id<AWESearchCustomTagComponentProvider> customTagComponent;
@property (retain, nonatomic) id<AWESearchCoverTagComponentProvider> coverTagComponent;
@property (retain, nonatomic) id<AWESearchPaidTagComponentProvider> paidTagComponent;
@property (retain, nonatomic) AWESearchPlayerInteractorLeftTopContainerComponentModel *leftTopModel;
@property (retain, nonatomic) NSMutableArray *broadCastArray;
@property (nonatomic) BOOL hasPlayed;
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
+ (id)getCreatSubComponentsArrayWithModel:(id)a0;

- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (id)receiveProtocolList;
- (void)p_loadComponent;
- (void).cxx_destruct;
- (id)componentView;
- (void)didStart;

@end
