@class UILabel, IESECSKUPOIViewModel, IESECUIImageView;

@interface IESECSKUNewPOIView : UIStackView

@property (retain, nonatomic) IESECSKUPOIViewModel *poiViewModel;
@property (retain, nonatomic) UILabel *header;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) UILabel *addressLabel;
@property (retain, nonatomic) IESECUIImageView *arrowImage;

+ (double)heightWithViewModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
