@class UIImageView, UILabel;

@interface IESLLPOITempoAddressEntryItemView : UIView

@property (retain, nonatomic) UIImageView *entryIcon;
@property (retain, nonatomic) UILabel *entryPrefixLabel;
@property (retain, nonatomic) UILabel *entryTitleLabel;
@property (retain, nonatomic) UIImageView *entryArrowIcon;
@property (copy, nonatomic) id /* block */ didTapEntry;

- (void)handleTapEntry;
- (void)updateWithEntryInfo:(id)a0;
- (void)updateLowTitleCompressionResistance;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
