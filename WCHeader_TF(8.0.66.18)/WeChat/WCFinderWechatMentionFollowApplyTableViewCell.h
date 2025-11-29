@class UIView, NSString, WCFinderWechatMentionCellViewModel, UIImageView, NSLayoutConstraint, WCFinderHeadImageView, UILabel, RichTextView;
@protocol WCFinderWechatMentionFollowApplyTableViewCellDelegate;

@interface WCFinderWechatMentionFollowApplyTableViewCell : UITableViewCell <WCFinderWechatMentionCellViewModelDelegate>

@property (weak, nonatomic) WCFinderHeadImageView *headImageView;
@property (weak, nonatomic) RichTextView *titleView;
@property (weak, nonatomic) UILabel *timestampLabel;
@property (weak, nonatomic) UIImageView *interactImageView;
@property (weak, nonatomic) UIView *lineView;
@property (retain, nonatomic) NSLayoutConstraint *titleWidthConstraint;
@property (retain, nonatomic) WCFinderWechatMentionCellViewModel *viewModel;
@property (weak, nonatomic) UIView *multiHeadImageView;
@property (weak, nonatomic) WCFinderHeadImageView *frontHeadImageView;
@property (weak, nonatomic) WCFinderHeadImageView *backHeadImageView;
@property (weak, nonatomic) id<WCFinderWechatMentionFollowApplyTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateCellHeightWithViewModel:(id)a0 width:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;
- (void)setupMultiImageView;
- (void)setupViewLayout;
- (void)updateNotifyCenterCellWithViewModel:(id)a0 width:(double)a1;
- (void)layoutUIWithViewModel:(id)a0 width:(double)a1;
- (void)onWechatMentionCellViewModelCellHeightChanged:(id)a0;
- (void).cxx_destruct;

@end
