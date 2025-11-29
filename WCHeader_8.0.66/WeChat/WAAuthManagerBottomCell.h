@class UIButton, NSString, WAAuthManagerBottomViewModel;

@interface WAAuthManagerBottomCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) UIButton *managerButton;
@property (retain, nonatomic) WAAuthManagerBottomViewModel *viewDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
