@class NSString, IESGCPDetailPageBottomSlotElementView;
@protocol IESGCPGameDetailLynxPageSlideViewService;

@interface IESGCPDetailPageBottomSlotElement : LynxUI <IESGCPDetailPageBottomSlotElementViewDelegate>

@property (weak, nonatomic) id<IESGCPGameDetailLynxPageSlideViewService> containerService;
@property (retain, nonatomic) IESGCPDetailPageBottomSlotElementView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__991;

- (void)layoutDidFinished;
- (id)getDIContextFromUniqueKey:(id)a0;
- (id)elementRootUI;
- (void)operateContainer:(BOOL)a0;
- (void)setUniquekey:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isOverlay;
- (id)createView;
- (void)frameDidChange;

@end
