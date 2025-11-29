@class IESLLActionSheetCellTextView, IESLLActionSheetItemModel, UIImageView, UIView, UIButton;
@protocol IESLLActionSheetCellDelegate;

@interface IESLLActionSheetCellView : UIView

@property (retain, nonatomic) UIView *customMaskView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLLActionSheetCellTextView *textView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) IESLLActionSheetItemModel *model;
@property (weak, nonatomic) id<IESLLActionSheetCellDelegate> delegate;

- (id)initWithModel:(id)a0 andDelegate:(id)a1;
- (void)cellTouched:(id)a0;
- (void)cellClicked:(id)a0;
- (void)cellTouchCancelled:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
