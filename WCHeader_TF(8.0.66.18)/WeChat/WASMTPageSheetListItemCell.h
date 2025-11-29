@class UILabel, NSString;

@interface WASMTPageSheetListItemCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

@end
