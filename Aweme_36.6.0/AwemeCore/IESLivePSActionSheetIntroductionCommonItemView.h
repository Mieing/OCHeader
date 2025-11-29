@class NSString, UIImageView, UILabel, UIButton;

@interface IESLivePSActionSheetIntroductionCommonItemView : UIView <IESLivePSActionSheetItemViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *introductionIcon;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) id /* block */ didClickIntroductionIcon;
@property (copy, nonatomic) id /* block */ didClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemCellTitle:(id)a0;
- (void)introductionIconDidClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)tapAction;

@end
