@class NSString, UIImageView, UILabel, IESIMShareSelectionHeaderModel, UIView;

@interface IESIMShareSelectionHeaderView : UICollectionReusableView <IESIMContactPickerContentSupplementaryViewProtocol>

@property (retain, nonatomic) IESIMShareSelectionHeaderModel *headerModel;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UILabel *rightEntryLabel;
@property (retain, nonatomic) UIView *rightContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)HeaderHeight;

- (void)configWithModel:(id)a0;
- (void)didThemeChanged;
- (void)p_setupConstraint;
- (void)didTapEntry;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
