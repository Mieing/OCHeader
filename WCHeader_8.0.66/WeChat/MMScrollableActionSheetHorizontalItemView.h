@class UIImageView, UILabel, MMScrollableActionSheetHorizontalItemInfo, UIButton;
@protocol MMScrollableActionSheetHorizontalItemViewDelegate;

@interface MMScrollableActionSheetHorizontalItemView : MMUIView

@property (retain, nonatomic) UIImageView *cornerImageView;
@property (nonatomic) double cachedItemViewHeight;
@property (weak, nonatomic) id<MMScrollableActionSheetHorizontalItemViewDelegate> delegate;
@property (retain, nonatomic) MMScrollableActionSheetHorizontalItemInfo *itemInfo;
@property (retain, nonatomic) UIButton *iconButton;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)initWithDelegate:(id)a0;
- (void)setupIconButton;
- (void)setupTitleLabel;
- (void)setupGestureRecognizer;
- (void)setNeedRecalcuateItemViewHeight;
- (double)calcuateItemViewHeight;
- (void)layoutSubviews;
- (double)layoutIconButtonAndTitleLabel;
- (void)onTappedItemInfo;
- (void).cxx_destruct;

@end
