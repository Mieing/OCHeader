@class UILabel, NSString;

@interface WAOverallAuthListHeaderCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
