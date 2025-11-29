@class NSString, UIColor;

@interface IESECStoreModernRatingLabel : UILabel

@property (copy, nonatomic) NSString *defaultText;
@property (retain, nonatomic) UIColor *defaultTextColor;
@property (retain, nonatomic) UIColor *scoreColor;
@property (nonatomic) unsigned long long starStyle;

- (id)getContentTextWithModel:(id)a0 appendText:(id)a1;
- (id)getContentTextWithScoreModel:(id)a0 appendText:(id)a1;
- (void)updateRatingLabelWithScoreModel:(id)a0;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)fullStarImage;
- (id)halfStarImage;
- (id)emptyStarImage;

@end
