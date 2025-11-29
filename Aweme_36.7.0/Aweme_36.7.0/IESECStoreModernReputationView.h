@class UIView, UILabel, IESECStoreModernRatingLabel;

@interface IESECStoreModernReputationView : UIView

@property (retain, nonatomic) IESECStoreModernRatingLabel *ratingLabel;
@property (retain, nonatomic) UIView *greaterLineView;
@property (retain, nonatomic) UILabel *greaterLabel;
@property (retain, nonatomic) UIView *saleCountLineView;
@property (retain, nonatomic) UILabel *saleCountLabel;

- (void)updateDataWithModel:(id)a0;
- (void)updateDataWithScoreModel:(id)a0;
- (void)updateRatingLabelWithScore:(id)a0 greaterText:(id)a1;
- (void).cxx_destruct;
- (void)setTextColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
