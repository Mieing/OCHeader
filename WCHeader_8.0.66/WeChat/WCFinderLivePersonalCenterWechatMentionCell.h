@class WCFinderRichTextView, NSString, WCFinderHeadImageView, WCFinderLivePersonalCenterWechatMentionCellVM, MMWebImageView, UIView, WCFinderLivePersonalCenterMentionTitleView;
@protocol WCFinderLivePersonalCenterWechatMentionCellDelegate;

@interface WCFinderLivePersonalCenterWechatMentionCell : UITableViewCell <WCFinderHeadImageViewDelegate, WCFinderContactExt, WCFinderLivePersonalCenterWechatMentionCellVMDelegate, WCFinderLivePersonalCenterMentionTitleViewDelegate>

@property (weak, nonatomic) UIView *lineView;
@property (weak, nonatomic) WCFinderHeadImageView *headImageView;
@property (weak, nonatomic) MMWebImageView *thumbImageView;
@property (retain, nonatomic) WCFinderLivePersonalCenterMentionTitleView *titleView;
@property (weak, nonatomic) WCFinderRichTextView *contentTextView;
@property (retain, nonatomic) WCFinderLivePersonalCenterWechatMentionCellVM *viewModel;
@property (nonatomic) BOOL needUpdateCellSize;
@property (weak, nonatomic) id<WCFinderLivePersonalCenterWechatMentionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calucateCellHeightWithViewModel:(id)a0 width:(double)a1;
+ (double)cellBottomMargin;
+ (double)mentionInteractionBtnHeight;
+ (struct CGSize { double x0; double x1; })mentionInteractionIconSize;
+ (double)titleMarginWithVM:(id)a0;

- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)setNeedsUpdateCellSize;
- (void)updateNofiyCenterCellWithViewModel:(id)a0 width:(double)a1;
- (void)layoutUIWithViewModel:(id)a0 width:(double)a1;
- (void)setUpUI;
- (void)setUpViewLayout;
- (void)updateSeperatorFull:(BOOL)a0;
- (void)onMentionTitleViewClickFollowButton:(id)a0;
- (void)onMentionTitleViewClickNickName:(id)a0;
- (void)onMentionTitleViewClickUserRelationshipTag:(id)a0;
- (void)onFinderContactFollowStatusUpdate:(id)a0;
- (void)onWechatMentionCellViewModelCellHeightChanged:(id)a0;
- (void)finderHeadImageViewDidClick:(id)a0;
- (void).cxx_destruct;

@end
