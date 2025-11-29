@class WCDataItem, WCMomentsPageContext, NSString, UIView, NSMutableArray, WCCommentViewFB;
@protocol WCTimeLineCommentCellViewDelegate, ILinkEventExt;

@interface WCTimeLineCommentCellView : MMUIView <IWCMyStoryUserStateUtilExt, ILinkEventExt, WCActionSheetDelegate, WCCommentViewFBDelegate> {
    UIView *m_likeContainer;
    UIView *m_lineView;
    WCCommentViewFB *m_commentView;
    BOOL m_bHaveActionSheet;
    BOOL m_isFoldCommentclk;
}

@property (retain, nonatomic) NSMutableArray *hasNewStoryArray;
@property (nonatomic) BOOL needTopRoundCorner;
@property (nonatomic) BOOL needBottomRoundCorner;
@property (retain, nonatomic) UIView *accessibilityView;
@property (nonatomic) long long iSection;
@property (nonatomic) long long iRow;
@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (retain, nonatomic) WCDataItem *mainDataItem;
@property (weak, nonatomic) id<WCTimeLineCommentCellViewDelegate> m_delegate;
@property (weak, nonatomic) id<ILinkEventExt> m_urlDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getNickNameForDataItem:(id)a0;
+ (double)getCellHeightForDataItem:(id)a0 RowIndex:(long long)a1 pageContext:(id)a2;
+ (long long)getCommentIndexForDataItem:(id)a0 RowIndex:(long long)a1;
+ (BOOL)isLastComment:(id)a0 RowIndex:(long long)a1;
+ (double)getCommentViewWidth;
+ (double)getCommentViewLeftMarginCurOri;
+ (unsigned long long)getCommentViewCountForDataItem:(id)a0;
+ (BOOL)GetIsCommentCellRow:(id)a0 RowIndex:(long long)a1;
+ (BOOL)GetIsLastCommentOrLikeCell:(id)a0 RowIndex:(long long)a1;

- (void)layoutSubviews;
- (id)initWithUrlDelegate:(id)a0;
- (BOOL)isShowLikeCell;
- (id)getShowComment;
- (void)reportCommentFoldClk;
- (void)initLikeContainer;
- (void)checkAdSocialLikeIcon:(id)a0;
- (void)initHasNewStoryArray;
- (void)initLineView;
- (void)initAdFireworkCheerPaddingView;
- (void)initView;
- (void)initAccessibilityViewWithAccessibilityLabel:(id)a0;
- (void)setRoundCorner;
- (void)deleteComment:(unsigned long long)a0;
- (void)showCommentDeleteOption:(id)a0;
- (void)showCommentClickOption:(id)a0;
- (void)showDeleteSelfCommentOption:(id)a0 userInfo:(id)a1 index:(long long)a2;
- (void)showDeleteFriendsCommentOption:(id)a0 userInfo:(id)a1 index:(long long)a2;
- (void)showReplyCommentOption:(id)a0 userInfo:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onCommentViewDelete:(id)a0;
- (void)onReloadCommentCellView:(id)a0;
- (void)onRestoreCommentCellView:(id)a0;
- (void)onFulltextBtnClick:(id)a0;
- (void)onCommentViewTopicTagClicked:(id)a0 query:(id)a1;
- (void)onCommentViewChangeTranslateLanguage:(id)a0 commentUserInfo:(id)a1;
- (void)onCommentViewClicked:(id)a0 item:(id)a1 comment:(id)a2;
- (void)onCommentViewEmoticonClicked:(id)a0 item:(id)a1 comment:(id)a2;
- (void)onCommentViewPicClicked:(id)a0 item:(id)a1 comment:(id)a2;
- (void)onCommentViewExposured:(id)a0 item:(id)a1 comment:(id)a2;
- (void)onCommentViewAddEmotion:(id)a0 item:(id)a1 comment:(id)a2;
- (void)onSetUnreadStoryMarkWithUserName:(id)a0;
- (void)onClearUnreadStoryMarkWithUserName:(id)a0;
- (void).cxx_destruct;

@end
