@class AWEIMPolymerizationDiggModel, NSIndexPath, UIImageView, UILabel, AWEUserNameLabel, YYLabel;
@protocol AWEIMPolymerizationDiggCellDelegate;

@interface AWEIMPolymerizationDiggCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) AWEIMPolymerizationDiggModel *model;
@property (retain, nonatomic) AWEUserNameLabel *nameLabel;
@property (retain, nonatomic) UILabel *relationTagLabel;
@property (retain, nonatomic) UIImageView *typeIcon;
@property (weak, nonatomic) id<AWEIMPolymerizationDiggCellDelegate> delegate;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) NSIndexPath *indexPath;

+ (id)defaultCoverImage;
+ (struct CGSize { double x0; double x1; })computeSizeForContent:(id)a0 withWidth:(double)a1;
+ (id)contentLabelAttributedStringWithModel:(id)a0;
+ (id)truncationAttributedStringWithModel:(id)a0;
+ (id)contentAttributedStringWithModel:(id)a0;
+ (id)timeAttributedStringWithModel:(id)a0;
+ (double)heightForModel:(id)a0;
+ (id)identifier;
+ (id)defaultImage;

- (void)configWithModel:(id)a0;
- (id)insertUids;
- (void)updateOnlineStatus:(BOOL)a0;
- (void)configCoverWithAwemeModel:(id)a0;
- (void)updateFrameWithMaxWidth:(double)a0;
- (void)videoCoverTransfer:(BOOL)a0;
- (id)aweNotice_IndexPath:(id)a0;
- (void)p_trackerInnerMessageWithAction:(id)a0 diggModel:(id)a1;
- (void)nameLabelTapped:(id)a0;
- (void)videoCoverCilcked:(id)a0;
- (void)updateNameLabel:(id)a0;
- (void)clickCellToTransfer;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (BOOL)accessibilityPerformMagicTap;
- (void)setupUI;
- (void)avatarViewTapped:(id)a0;

@end
