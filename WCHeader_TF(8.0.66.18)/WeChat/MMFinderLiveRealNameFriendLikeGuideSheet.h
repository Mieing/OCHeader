@class UILabel, MMHeadImageView, NSString;

@interface MMFinderLiveRealNameFriendLikeGuideSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *wechatRoleLabel;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) MMHeadImageView *headerImageView;
@property (copy, nonatomic) id /* block */ cancelRecommendBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ disAppearAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 cancelRecommendBlock:(id /* block */)a1 confirmBlock:(id /* block */)a2 disAppearAction:(id /* block */)a3;
- (void)initViews;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButtonTitle;
- (long long)styleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void).cxx_destruct;

@end
