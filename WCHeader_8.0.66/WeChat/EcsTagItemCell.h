@class NSString, EcsRichTextLabel, EcsTagItemViewModel;

@interface EcsTagItemCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) EcsRichTextLabel *titleLabel;
@property (retain, nonatomic) EcsTagItemViewModel *viewDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })viewSizeByDataModel:(id)a0 hostView:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void).cxx_destruct;

@end
