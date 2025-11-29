@class WAAuthManagerItemViewModel, MMTableView, WAAuthManagerSectionViewModel, NSString, ZZFLEXAngel;

@interface WAAuthManagerSectionCell : UICollectionViewCell <WCActionSheetDelegate, ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) ZZFLEXAngel *angel;
@property (retain, nonatomic) WAAuthManagerItemViewModel *prepareDeleteViewModel;
@property (retain, nonatomic) WAAuthManagerSectionViewModel *viewDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)deleteUserInfoItem:(id)a0;
- (void)actionSheet:(id)a0 willDismissWithButtonIndex:(long long)a1;
- (void).cxx_destruct;

@end
