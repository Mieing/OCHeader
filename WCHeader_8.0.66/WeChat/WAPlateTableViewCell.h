@class UIImageView, MMUILabel, NSString;

@interface WAPlateTableViewCell : MMBaseMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) MMUILabel *titleLable;
@property (retain, nonatomic) UIImageView *toggledImageView;
@property (nonatomic) double edgeLeft;
@property (retain, nonatomic) NSString *titleDesc;
@property (nonatomic) BOOL enableToggle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateView;
- (void).cxx_destruct;

@end
