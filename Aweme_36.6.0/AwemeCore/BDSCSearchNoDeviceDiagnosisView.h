@class BDSCSearchNoDeviceDiagnosisModel, UILabel, BDSCImageView, UIView;

@interface BDSCSearchNoDeviceDiagnosisView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) BDSCImageView *arrowView;
@property (retain, nonatomic) BDSCSearchNoDeviceDiagnosisModel *model;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)didTapView:(id)a0;

@end
