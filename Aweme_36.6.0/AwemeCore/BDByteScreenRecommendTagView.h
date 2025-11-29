@class UILabel, BDByteScreenCastLabel, BDSCBackgroundView;

@interface BDByteScreenRecommendTagView : UIView

@property (retain, nonatomic) BDByteScreenCastLabel *tagLabel;
@property (retain, nonatomic) BDSCBackgroundView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)configWith:(id)a0;
- (id)initWithTagConfig:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;

@end
