@class AWEHotSearchCommentSectionFooterModel, NSLock;

@interface AWEHotSearchCommentSectionViewModel : AWECommonFeedBaseSectionViewModel

@property (retain, nonatomic) AWEHotSearchCommentSectionFooterModel *footerModel;
@property (retain, nonatomic) NSLock *diggLock;

- (id)awemeModel;
- (id)referString;
- (id)commentModel;
- (id)commonTrackParams;
- (id)initWithCardModel:(id)a0;
- (void)configCellModels;
- (id)hotspotID;
- (id)innerCardModel;
- (void)p_commentDeleteNotification:(id)a0;
- (void)p_commentLikeActionNotification:(id)a0;
- (void)p_bindObserver;
- (void)trackDiscussionItemShowWithCellModel:(id)a0 extra:(id)a1;
- (void)trackDiscussionItemClickWithCellModel:(id)a0 type:(long long)a1 extra:(id)a2;
- (id)getSourceURL;
- (void)trackFeedEnterWithExtra:(id)a0;
- (id)getReplyTreeGeneralModel;
- (id)getReplyTreeCardModel;
- (void)attachToCommentReport:(id)a0;
- (id)getPersonalDetailFakeAweme:(id)a0;
- (id)commonTrackParamsWithCellModel:(id)a0;
- (void)doAddSticker:(id)a0;
- (void)doClickLikeButton:(id)a0;
- (void)trackLongPressWithCellModel:(id)a0 extra:(id)a1;
- (id)getLongPressPanelAweme;
- (id)getLongPressPanelGeneralModel;
- (id)p_buildFooterModel;
- (void)p_commentAddedNotification:(id)a0;
- (void)p_commentTotalCountNotification:(id)a0;
- (void)p_updateCommentCountWithParams:(id)a0 delta:(long long)a1;
- (BOOL)isCommentOfHotspot;
- (BOOL)isCommentOfAweme;
- (void)trackDiscussionItemLikeWithCellModel:(id)a0 extra:(id)a1;
- (void)p_postLikeNotificationForComment:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPlaceholder;
- (void)dealloc;

@end
