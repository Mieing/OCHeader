@class MMUIImageView, MMLiveMessageViewModel, UIView, MMUILabel;

@interface MMLiveMessageCellView : CommonMessageCellView

@property (readonly, nonatomic) MMLiveMessageViewModel *viewModel;
@property (retain, nonatomic) MMUILabel *liveNameLabel;
@property (retain, nonatomic) MMUILabel *liveStatusLabel;
@property (retain, nonatomic) MMUIImageView *liveIconAnimatedView;
@property (retain, nonatomic) MMUIImageView *liveIconView;
@property (retain, nonatomic) MMUILabel *liveSourceLabel;
@property (retain, nonatomic) UIView *seperatorLineView;

- (void)layoutContentView;
- (void)layoutSubviews;
- (void)initBgImageView;
- (void)layoutDefault;
- (void)reloadData;
- (void)updateLiveLogoStatus;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
