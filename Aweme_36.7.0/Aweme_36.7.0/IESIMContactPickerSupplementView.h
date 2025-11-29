@class UILabel, NSString;

@interface IESIMContactPickerSupplementView : UICollectionReusableView <IESIMContactPickerContentSupplementaryViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)p_setupLayout;
- (double)__duxFontSizeIfNecessary:(double)a0;
- (void)p_setupBackgroundColorWithColor:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
