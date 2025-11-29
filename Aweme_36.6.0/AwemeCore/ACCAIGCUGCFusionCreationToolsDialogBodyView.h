@class UILabel, DUXCheckBox;

@interface ACCAIGCUGCFusionCreationToolsDialogBodyView : UIView

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) DUXCheckBox *checkbox;
@property (copy, nonatomic) id /* block */ didSelectedBlock;

- (void)checkboxDidClicked;
- (void)tipsLabelDidClicked;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
