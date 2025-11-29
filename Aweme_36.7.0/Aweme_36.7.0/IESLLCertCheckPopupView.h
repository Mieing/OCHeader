@class NSString, NSArray, UILabel, UIView, UIButton;

@interface IESLLCertCheckPopupView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *reloadButton;
@property (copy, nonatomic) NSString *educationalTitle;
@property (retain, nonatomic) NSArray *dataItems;
@property (retain, nonatomic) NSArray *itemViews;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ reloadBlock;

- (void)adjustLayout;
- (void)hideViewWithAnimation:(BOOL)a0;
- (void)reloadAction;
- (void)updateDataItems:(id)a0 title:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)showInView:(id)a0;
- (void)setupUI;
- (void)confirmAction;

@end
