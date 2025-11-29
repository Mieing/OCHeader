@class WCFinderLiveFansGroupInterestsInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveFansGroupInterestsCell : UIView

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) WCFinderLiveFansGroupInterestsInfo *interestsInfo;
@property (nonatomic) BOOL shouldAdaptToDarkLight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithInterestsInfo:(id)a0;
- (void)adjustSelfSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLabels;
- (void).cxx_destruct;

@end
