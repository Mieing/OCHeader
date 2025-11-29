@class AWEIMGeneralCardView, NSString, AWEButton, AWEGradientView;

@interface AWEIMShareStickerMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEIMShareCardViewDelegate>

@property (retain, nonatomic) AWEIMGeneralCardView *cardView;
@property (retain, nonatomic) AWEButton *shootSameButton;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)coverTapped:(id)a0;
- (void)configShootSameButtonIfNeedWithMessage:(id)a0;
- (void)shootSameButtonTapped;
- (void)p_trackItemClickWithMessage:(id)a0 place:(id)a1;
- (void)checkUserSendPhotoPrivilegeWithCompletion:(id /* block */)a0;
- (void)postViewTapped:(id)a0;
- (void)p_trackShareStickerCellShow;
- (void)trackShareStickerCellShowIfNeeded;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end
