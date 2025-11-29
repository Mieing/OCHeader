@class IESLiveGiftPanelTopicItem, NSString, UIView;
@protocol IESHYContainerProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftPanelTopicView : UIView <IESHYHybridViewLifecycleProtocol, IESLiveRefactGiftPanelEventAction, IESLiveRefactGiftPanelSectionViewProtocol>

@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL animating;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) IESLiveGiftPanelTopicItem *viewModel;
@property (nonatomic) BOOL isInInteract;
@property (nonatomic) long long inInteractTabIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)gpe_giftListScrollViewDidScroll:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_giftListScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)gpe_giftListScrollViewWillBeginDragging:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)bindViewModel;
- (void)animationStartWithExpand:(BOOL)a0 type:(unsigned long long)a1;
- (void)doAnimationWithType:(unsigned long long)a0;
- (void)animationFinishedWithExpand:(BOOL)a0 type:(unsigned long long)a1;
- (void)doAnimationWithExpand:(BOOL)a0 duration:(float)a1 completion:(id /* block */)a2;
- (id)urlString;
- (void).cxx_destruct;
- (void)setUpView;

@end
