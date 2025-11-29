@class WAAuthorizeTableViewCellInfo, NSString, UIImageView, MMWebImageView, MMUILabel;

@interface WAAuthorizeTableViewCell : MMBaseMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) WAAuthorizeTableViewCellInfo *viewDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;
+ (double)viewHeight;

- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
