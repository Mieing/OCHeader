@class UIStackView, UIImageView, UIView, UILabel;

@interface ACCASMusicChartCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *header;
@property (retain, nonatomic) UILabel *title;

+ (id)identifier;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)configureWithModel:(id)a0;

@end
