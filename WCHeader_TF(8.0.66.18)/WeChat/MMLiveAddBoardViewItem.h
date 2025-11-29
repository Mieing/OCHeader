@class MMUILabel, MMUIButton;

@interface MMLiveAddBoardViewItem : UIView

@property (retain, nonatomic) MMUIButton *functionButton;
@property (retain, nonatomic) MMUILabel *functionLabel;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ itemClickBlock;
@property (nonatomic) BOOL isActionEnabled;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;
- (void)layoutUI;
- (void)functionButtonClick;
- (void).cxx_destruct;

@end
