@class MMUIButton, RichTextView, UIView, MMWebImageView, MPCommentBaseCellViewModel, MMUILabel;
@protocol MPCommentViewCellDelegate;

@interface MPCommentBaseCellView : UITableViewCell {
    MMWebImageView *m_headImageView;
    MMUILabel *m_nickNameLabel;
    MMUILabel *m_tipsLabel;
    MMUIButton *m_likeButton;
    RichTextView *m_contentLabel;
    MMUIButton *m_deleteBtn;
    MMUIButton *m_replyBtn;
    UIView *m_dividerView;
}

@property (readonly, nonatomic) MPCommentBaseCellViewModel *viewModel;
@property (weak, nonatomic) id<MPCommentViewCellDelegate> viewDelegate;

- (id)initWithViewModel:(id)a0;
- (void)updateWithViewModel:(id)a0;
- (void)initSubViews;
- (void)initHeadImageView;
- (void)initNicknameLabel;
- (void)initContentLabel;
- (void)initDeleteBtn;
- (void)initLikeBtn;
- (void)initTipsLabel;
- (void)initDividerView;
- (void)initReplyBtn;
- (void)layoutButtons;
- (void)onClickDeleteBtn;
- (void)onClickReplyBtn;
- (void)onClickLikeBtn;
- (void)updateLikeBtn;
- (void).cxx_destruct;

@end
