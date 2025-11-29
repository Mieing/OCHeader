@class UILabel;

@interface IESLLActionSheetCellTextView : UIView

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;

- (void)setMainTitleWithModel:(id)a0;
- (void)setSubTitleWithModel:(id)a0;
- (double)currentHeight;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
