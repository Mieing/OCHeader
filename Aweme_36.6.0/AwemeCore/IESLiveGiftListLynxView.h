@class GiftTopic, NSString, IESLiveGiftPanelDataSharing, UIView, HTSLiveGiftItemCollectionViewModel, HTSLiveGiftItemCollectionLayout;
@protocol IESLiveSubscription, IESHYContainerProtocol, IESLiveGiftListCollectionViewDelgate;

@interface IESLiveGiftListLynxView : UIView <IESHYHybridViewLifecycleProtocol, IESLiveGiftListCollectionProtocol>

@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (copy, nonatomic) NSString *containerOriginSchema;
@property (nonatomic) BOOL enableDelayCreateView;
@property (nonatomic) BOOL enableLoadingView;
@property (retain, nonatomic) id<IESLiveSubscription> racDisposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSLiveGiftItemCollectionViewModel *viewModel;
@property (retain, nonatomic) HTSLiveGiftItemCollectionLayout *collectionLayout;
@property (nonatomic) struct CGPoint { double x; double y; } verticalScrollMaxContentOffset;
@property (nonatomic) long long tabIndex;
@property (nonatomic) long long topicIndex;
@property (nonatomic) BOOL isGiftListRefreshed;
@property (nonatomic) BOOL topicCollectionViewScrolling;
@property (retain, nonatomic) GiftTopic *giftTopic;
@property (nonatomic) BOOL selectGiftHalfDisplay;
@property (nonatomic) BOOL isTopicCollectionView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visibleRange;
@property (weak, nonatomic) id<IESLiveGiftListCollectionViewDelgate> delegate;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;

- (void)didSetAttachingDIContext;
- (void)scrollToYOffset:(double)a0 withAnimation:(BOOL)a1;
- (void)scrollToXOffset:(double)a0 withAnimation:(BOOL)a1;
- (double)itemTopPositionYForIndexPath:(id)a0;
- (BOOL)needKeepOperationRectOnAutoScroll;
- (void)scrollVerticalToRowIndex:(long long)a0 withAnimation:(BOOL)a1 isPreSelect:(BOOL)a2;
- (void)didUpdateGiftTopic;
- (long long)itemRowIndexForIndexPath:(id)a0;
- (void)trackDistinctGiftShow:(id)a0;
- (void)setUpRac;
- (void)handleNewFullDisplayGiftItemWithOffset:(double)a0 firstScreen:(BOOL)a1;
- (void)trackForNewDisplayCellsIfNeeded:(double)a0 force:(BOOL)a1;
- (void)setEnableLongPress;
- (void)doSecondSlideIfNeed;
- (void)createLynxViewIfNeed;
- (id)indexPathForGlobalIndex:(long long)a0;
- (id)urlString;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void)dealloc;
- (id)collectionView;
- (void)setUpView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrame;

@end
