@class IESECGoodsDetailDetailTableQualificationView, UILabel, UIView, IESECUIImageView;

@interface IESECGoodsDetailDetailTableItemView : UIView

@property (retain, nonatomic) IESECUIImageView *logoImageView;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *mainContentLabel;
@property (retain, nonatomic) IESECGoodsDetailDetailTableQualificationView *qualificationView;
@property (retain, nonatomic) UIView *backgroundView;

+ (double)heightWithContentModel:(id)a0 headerWidth:(double)a1 containerWidth:(double)a2;
+ (double)certificationHeightWithContentModel:(id)a0;

- (void)updateContentWithTableItemModel:(id)a0 headerWidth:(double)a1 containerWidth:(double)a2;
- (void).cxx_destruct;
- (id)init;

@end
