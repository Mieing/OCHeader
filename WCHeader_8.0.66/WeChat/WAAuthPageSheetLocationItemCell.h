@class UIButton, MMUILabel, NSString;

@interface WAAuthPageSheetLocationItemCell : MMTableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIButton *selectedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void).cxx_destruct;

@end
