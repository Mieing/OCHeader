@class UIImageView, BDPActionSheetHeaderModel, UIView, BDPActionSheetCellTextView;

@interface BDPActionSheetHeaderView : UIView

@property (retain, nonatomic) BDPActionSheetHeaderModel *model;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDPActionSheetCellTextView *textView;
@property (retain, nonatomic) UIImageView *titleIconImageView;

- (void)setupTextStyle;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
