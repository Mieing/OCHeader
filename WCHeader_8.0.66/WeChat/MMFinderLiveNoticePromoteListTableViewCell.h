@class MMPaddingView, ZZLabelChainModel, UIImageView, FinderLiveNoticeInfo, UILabel, UIView, MMUIButton;
@protocol MMFinderLiveNoticePromoteListTableViewCellDelegate;

@interface MMFinderLiveNoticePromoteListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *liveIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UILabel *reserveCountLabel;
@property (retain, nonatomic) UIView *horizontalSeparatorBar;
@property (retain, nonatomic) MMUIButton *addButton;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNotice;
@property (retain, nonatomic) MMPaddingView *couponsTitleLabel;
@property (retain, nonatomic) ZZLabelChainModel *couponsStateModel;
@property (nonatomic) BOOL added;
@property (weak, nonatomic) id<MMFinderLiveNoticePromoteListTableViewCellDelegate> delegate;

+ (double)estimatedHeight;
+ (double)exactHeightForLiveNotice:(id)a0;
+ (id)getReserveString:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateWithLiveNotice:(id)a0 added:(BOOL)a1;
- (void)layoutSubviews;
- (void)onAddButtonTapped;
- (void).cxx_destruct;

@end
