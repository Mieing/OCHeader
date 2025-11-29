@class UILabel, NSString;

@interface ACCTagsPOIPickerTableViewCell : UITableViewCell <ACCTagsItemPickerTableViewCellProtocol>

@property (retain, nonatomic) UILabel *poiTitleLabel;
@property (retain, nonatomic) UILabel *poiAddressLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
