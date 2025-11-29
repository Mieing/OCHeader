@class MMUILabel, NSString, WASubscriptionMessagePageSheetMessageItem, WASMPageSheetCellSwitch, WASMPageSheetBellringView;

@interface WASMPageSheetListItemCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) WASMPageSheetCellSwitch *switchView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WASMPageSheetBellringView *bellingView;
@property (retain, nonatomic) WASubscriptionMessagePageSheetMessageItem *viewDataModel;
@property (copy, nonatomic) id /* block */ viewEventAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

@end
