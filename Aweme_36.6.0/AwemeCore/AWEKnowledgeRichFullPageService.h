@class NSString;

@interface AWEKnowledgeRichFullPageService : HTSService <AWEKnowledgeRichFullPageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)richAwemeBottomBarViewWithAwemeModel:(id)a0 inputViewClickBlock:(id /* block */)a1;
- (id)createAnchorViewModelWithAwemeModel:(id)a0 referString:(id)a1;
- (Class)headerDescriptionViewHelper;
- (id)createFullPageFeedListViewControllerPayload:(id)a0;
- (BOOL)richAwemeHasRelatedRecommendWithEnterFrom:(id)a0 logExtra:(id)a1;
- (id)createCorrelationItemTagWithModel:(id)a0 enterFrom:(id)a1;
- (void)insertCorrelationItemTagIfNeededWithAttributedString:(id)a0 enterFrom:(id)a1 awemeModel:(id)a2;
- (void)calibrateCorrelationAlbumItemWithItem:(id)a0;
- (id)createRichAwemeVideoController:(BOOL)a0 isSlidesContent:(BOOL)a1 model:(id)a2 videoController:(id)a3 videoContext:(id)a4;
- (id)fullPageLongPressManager;
- (id)getCoCreatorContainer;
- (id)createLifeEvaluationView;
- (id)createProductCommentView;
- (id)createProductLabelDescriptionView;

@end
