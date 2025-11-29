@class UILabel, NSString;

@interface IESIMIncentiveRecommendCreateGroupHeader : UICollectionReusableView <IESIMContactPickerContentSupplementaryViewProtocol>

@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (double)__duxFontSizeIfNecessary:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
