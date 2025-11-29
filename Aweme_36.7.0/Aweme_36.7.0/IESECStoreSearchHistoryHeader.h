@class UILabel, UIButton, UIView;

@interface IESECStoreSearchHistoryHeader : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *editBtn;
@property (retain, nonatomic) UIView *editView;
@property (nonatomic) BOOL editMode;
@property (copy, nonatomic) id /* block */ editAction;
@property (copy, nonatomic) id /* block */ deleteAction;

- (void)deleteBtnTapped;
- (void)editBtnTapped;
- (void)confirmBtnTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
