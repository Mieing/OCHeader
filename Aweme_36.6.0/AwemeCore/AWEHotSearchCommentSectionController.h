@class NSString, UIViewController;
@protocol AWEAwemePlayInteractionRouterProtocol, AWEAwemePlayInteractionInteractorProtocol, AWECommentListViewControllerProtocol;

@interface AWEHotSearchCommentSectionController : AWECommonFeedBaseSectionController <AWEHotSearchCommentSectionCellActionDelegate>

@property (retain, nonatomic) id<AWEAwemePlayInteractionRouterProtocol> router;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (nonatomic) BOOL isStickerDetailShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEDiscoverDModuleServiceDOUYINLiteAdaperClass;

- (id)referString;
- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configSupplementaryFooterView:(id)a0;
- (id)innerViewModel;
- (void)doEnterPersonalDetail:(id)a0 cellModel:(id)a1;
- (void)doEnterCommentReplyTree:(id)a0 cellModel:(id)a1 isReplyBtn:(BOOL)a2;
- (void)doTransferToURL:(id)a0 cellModel:(id)a1 url:(id)a2;
- (void)doPreviewImage:(id)a0 cellModel:(id)a1;
- (void)doClickLikeButton:(id)a0 cellModel:(id)a1;
- (void)doAddSticker:(id)a0 cellModel:(id)a1;
- (void)doEnterLongPressPanel:(id)a0 cellModel:(id)a1;
- (void)doOpenStickerDetail:(id)a0 cellModel:(id)a1;
- (void)p_bindObserver;
- (void)p_commentRisePanelNotification:(id)a0;
- (void)p_showCommentReplyTreeWithIsReplyBtn:(BOOL)a0 insertCid:(id)a1;
- (id)aAWEDiscoverDModuleServiceDOUYINLiteAdaper;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)footerViewClass;

@end
