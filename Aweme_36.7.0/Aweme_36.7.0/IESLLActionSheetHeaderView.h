@class IESLLActionSheetHeaderModel, UIImageView, UIView, IESLLActionSheetCellTextView;

@interface IESLLActionSheetHeaderView : UIView

@property (retain, nonatomic) IESLLActionSheetHeaderModel *model;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLLActionSheetCellTextView *textView;
@property (retain, nonatomic) UIImageView *titleIconImageView;

- (void)setupTextStyle;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
