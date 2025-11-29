@class UIButton, UILabel, UIImageView;

@interface IESLiveProfessionCertificateView : UIView

@property (retain, nonatomic) UIButton *cancleBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UILabel *detailSubjectLabel;
@property (retain, nonatomic) UILabel *detailKnowledgeLabel;
@property (retain, nonatomic) UILabel *detailIdentityLabel;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ confirmAction;

- (void)doCancel;
- (void)doConfirm;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
