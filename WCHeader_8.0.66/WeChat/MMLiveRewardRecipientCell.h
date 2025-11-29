@class MMCPLabel, WCFinderContact, UIImageView, MMFinderLiveTaskId, MMHeadImageView;
@protocol MMLiveRewardRecipientCellDelegate;

@interface MMLiveRewardRecipientCell : MMTableViewCell

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMCPLabel *displayNameLabel;
@property (retain, nonatomic) UIImageView *selectionIndicatorView;
@property (retain, nonatomic) WCFinderContact *rewardRecipientContact;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (weak, nonatomic) id<MMLiveRewardRecipientCellDelegate> cellDelegate;

+ (id)identifier;
+ (double)getCellHeight;
+ (double)getSeperatorLineXMargin;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initViews;
- (void)updateWithRewardRecipientContact:(id)a0 liveTaskId:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)liveTask;
- (void)updateHeadImageConerRadius:(double)a0;
- (void)onHeadImageClicked:(id)a0;
- (void).cxx_destruct;

@end
