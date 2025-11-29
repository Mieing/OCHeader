@class NSString, UIImageView, UILabel, IESIMOtherGroupFooterViewModel;

@interface IESIMOtherGroupFooterView : UICollectionReusableView <IESIMContactPickerContentSupplementaryViewProtocol>

@property (retain, nonatomic) IESIMOtherGroupFooterViewModel *viewModel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL isNotFirstShow;
@property (nonatomic) double otherGroupPageHeightRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)addKVO;
- (void)configureViewModel:(id)a0;
- (void)p_trackMyOtherGroupEntranceEvent:(id)a0;
- (void)p_otherGroupFooterShowOwnOtherGroupNumberViewTap:(id)a0;
- (void)otherGroupFooterViewDidClicked;
- (id)fetchOtherGroupCount;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateText:(long long)a0;

@end
