@class WCTagsView, NSDate, WAAppProfileViewModel, UIView, MMWebImageView, MMUILabel;

@interface WAAppProfileCellView : WAAppMessageBaseCellView

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) WCTagsView *tagsView;
@property (retain, nonatomic) MMUILabel *scoreLabel;
@property (retain, nonatomic) NSDate *visibleDate;
@property (readonly, nonatomic) WAAppProfileViewModel *viewModel;

- (void)willMoveToWindow:(id)a0;
- (void)layoutContentView;
- (void)initWeAppProfileView;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
