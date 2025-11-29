@class ServiceNotifyMessageViewModel, FinderLiveMessageCellMainContentView, NSString, MMWebImageView, UILabel, UIView;

@interface FinderLiveServiceNotifyMessageCellView : BaseMessageCellView <ServiceAuthExt>

@property (retain, nonatomic) FinderLiveMessageCellMainContentView *mainContentView;
@property (readonly, nonatomic) ServiceNotifyMessageViewModel *serviceNotifyMessageViewModel;
@property (retain, nonatomic) MMWebImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) MMWebImageView *authIconImageView;
@property (retain, nonatomic) UIView *titleLineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *onPressedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentView;
- (void)recreateContentViews;
- (void)onTouchDown;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onTouchUpInside;
- (void)showWCCoinView;
- (id)itemLabelWithTitle:(id)a0 width:(double)a1 font:(id)a2;
- (id)itemValueLabelWithTitle:(id)a0 width:(double)a1 font:(id)a2;
- (id)itemValueLabelWithTitle:(id)a0 width:(double)a1 font:(id)a2 maxLine:(unsigned long long)a3;
- (id)genDisplayViewWithItemInfo:(id)a0 longestKeyLabelWidth:(double)a1 maxDisplayViewWidth:(double)a2;
- (id)genAvatarImageView;
- (id)genAuthIconImageView;
- (id)genTitleLabel;
- (id)genLineView;
- (id)genNickNameLabel;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
