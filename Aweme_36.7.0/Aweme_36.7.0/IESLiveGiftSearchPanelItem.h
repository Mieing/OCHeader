@class IESLiveGiftListCollectionView, NSString, IESLiveNewGiftPanelContext, UIView, IESLiveGiftPanelSearchView, IESLiveNewGiftPanelOperationItem;

@interface IESLiveGiftSearchPanelItem : NSObject <IESLiveRefactGiftPanelEventAction, IESLiveGiftListCollectionViewDelgate, IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) IESLiveNewGiftPanelOperationItem *operationItem;
@property (retain, nonatomic) IESLiveGiftPanelSearchView *searchView;
@property (retain, nonatomic) IESLiveGiftListCollectionView *giftListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isOperationExpand;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (void)gpe_giftOperationChangeToExpand:(BOOL)a0 isFromExtraRefresh:(BOOL)a1;
- (id)initWithPanelContext:(id)a0;
- (void)sendGiftFromCell;
- (void)giftListDidSelectItemAtIndexPath:(id)a0;
- (void)giftListScrollViewWillBeginDragging:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void).cxx_destruct;
- (void)loadView;

@end
