@class NSString, IESIMContactPickerCustomContentCellModel, UIView;

@interface IESIMContactPickerCustomContentCell : UICollectionViewCell <IESIMContactPickerContentCellProtocol>

@property (retain, nonatomic) IESIMContactPickerCustomContentCellModel *cellModel;
@property (retain, nonatomic) UIView *customView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithCellModel:(id)a0;
- (void).cxx_destruct;

@end
