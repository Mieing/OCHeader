@class UIImageView, DUXActionSheetCellTextView, UIView, DUXActionSheetItemModel, UIButton;
@protocol DUXActionSheetCellDelegate;

@interface DUXActionSheetCellView : UIView

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXActionSheetCellTextView *textView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) DUXActionSheetItemModel *model;
@property (weak, nonatomic) id<DUXActionSheetCellDelegate> delegate;

- (id)initWithModel:(id)a0 andDelegate:(id)a1;
- (void)cellTouched:(id)a0;
- (void)cellClicked:(id)a0;
- (void)cellTouchCancelled:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
