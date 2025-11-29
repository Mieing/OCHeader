@class NSString, WAAuthPageSheetViewModel;

@interface WAAuthPageSheetBaseView : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (class, readonly, nonatomic) double edgeLR;

@property (retain, nonatomic) WAAuthPageSheetViewModel *viewDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
