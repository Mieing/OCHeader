@class DUXActionSheetHeaderModel, UIImageView, DUXActionSheetCellTextView, UIView;

@interface DUXActionSheetHeaderView : UIView

@property (retain, nonatomic) DUXActionSheetHeaderModel *model;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXActionSheetCellTextView *textView;
@property (retain, nonatomic) UIImageView *titleIconImageView;

- (void)setupTextStyle;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
