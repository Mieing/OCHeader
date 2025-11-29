@class AWECommentModel, UIImageView, UILabel, AWEUserNameLabel, YYLabel;
@protocol AWEIMSecondaryCommentCellDelegate;

@interface AWEIMSecondaryCommentCell : UITableViewCell

@property (weak, nonatomic) id<AWEIMSecondaryCommentCellDelegate> delegate;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) YYLabel *deleteTipLabel;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (retain, nonatomic) AWEUserNameLabel *nameLabel;
@property (retain, nonatomic) UILabel *relationTagLabel;

+ (id)gifTagLabelView;
+ (id)defaultCoverImage;
+ (struct CGSize { double x0; double x1; })computeSizeForContent:(id)a0 withWidth:(double)a1;
+ (id)contentLabelAttributedStringWithModel:(id)a0;
+ (id)truncationAttributedStringWithModel:(id)a0;
+ (double)heightForModel:(id)a0;
+ (id)deleteTipAttributedStringWithStr:(id)a0;
+ (id)commentTimeAttributedStringWithModel:(id)a0;
+ (id)commentContentAttributedStringWithModel:(id)a0;
+ (id)commentStickerAttributedStringWithModel:(id)a0;
+ (id)identifier;
+ (id)_defaultImage;

- (void)configWithModel:(id)a0;
- (void)nameLabelTapped:(id)a0;
- (void)configCoverImageWithAwemeCommentModel;
- (void)p_showReplyUser;
- (void)p_showStickerDetail;
- (void)p_showPictureDetail;
- (void)p_showDefaultCommentContent;
- (void)contentLabelHighlightTapped:(id)a0;
- (void)coverViewTapped:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (BOOL)accessibilityPerformMagicTap;
- (void)setupUI;
- (void)avatarViewTapped:(id)a0;

@end
