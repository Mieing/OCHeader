@class UILabel, IESECWinOrderButton, NSString;

@interface IESECWinOrderCell : UICollectionViewCell <IESECWinOrderCellProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESECWinOrderButton *orderButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
