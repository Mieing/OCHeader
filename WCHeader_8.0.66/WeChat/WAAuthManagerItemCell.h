@class WAAuthManagerItemViewModel, NSString, UILabel, MMWebImageView, UIButton;

@interface WAAuthManagerItemCell : MMBaseMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *hasDeleteLabel;
@property (retain, nonatomic) WAAuthManagerItemViewModel *viewDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
