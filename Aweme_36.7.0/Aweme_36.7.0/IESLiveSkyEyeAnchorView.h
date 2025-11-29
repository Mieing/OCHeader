@class NSArray, UIImageView, UILabel, NSNumber;

@interface IESLiveSkyEyeAnchorView : UIView

@property (retain, nonatomic) NSNumber *chat_switch;
@property (retain, nonatomic) NSArray *btns;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *topTipLabel;
@property (retain, nonatomic) UILabel *bottomTipLabel;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ confirmAction;

- (void)doCancel;
- (void)doConfirm;
- (void)updateSelectWithBtn:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
